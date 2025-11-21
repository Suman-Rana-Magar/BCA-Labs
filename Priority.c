#include <stdio.h>

typedef struct {
    int pid, at, bt, pr, ct, tat, wt, rt, start;
} Process;

int main() {
    int n, i, completed=0, time=0;
    printf("Enter number of processes: ");
    scanf("%d",&n);

    Process p[n];
    int done[n];
    for(i=0;i<n;i++){
        p[i].pid=i+1;
        printf("Enter AT, BT, Priority of P%d: ", i+1);
        scanf("%d%d%d",&p[i].at,&p[i].bt,&p[i].pr);
        done[i]=0;
    }

    while(completed<n){
        int idx=-1, min=1e9;
        for(i=0;i<n;i++)
            if(!done[i] && p[i].at<=time && p[i].pr<min){ min=p[i].pr; idx=i; }
        if(idx==-1){ time++; continue; }

        p[idx].start=(time>p[idx].at)?time:p[idx].at;
        p[idx].rt=p[idx].start-p[idx].at;
        time=p[idx].start+p[idx].bt;
        p[idx].ct=time;
        p[idx].tat=p[idx].ct-p[idx].at;
        p[idx].wt=p[idx].tat-p[idx].bt;
        done[idx]=1;
        completed++;
    }

    double totalTAT=0, totalRT=0;
    printf("\nPriority Scheduling:\nP\tAT\tBT\tPR\tCT\tTAT\tWT\tRT\n");
    for(i=0;i<n;i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid,p[i].at,p[i].bt,p[i].pr,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
        totalTAT+=p[i].tat; totalRT+=p[i].rt;
    }
    printf("\nAverage TAT = %.2f\nAverage RT = %.2f\n", totalTAT/n, totalRT/n);
}
