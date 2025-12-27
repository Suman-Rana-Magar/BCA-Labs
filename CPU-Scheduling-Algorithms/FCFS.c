#include <stdio.h>

typedef struct {
    int pid, at, bt, ct, tat, wt, rt, start;
} Process;

int main() {
    int n, i;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    Process p[n];
    for(i=0;i<n;i++){
        p[i].pid = i+1;
        printf("Enter AT and BT of P%d: ", i+1);
        scanf("%d%d",&p[i].at,&p[i].bt);
    }

    int time=0;
    for(i=0;i<n;i++){
        if(time<p[i].at) time=p[i].at;
        p[i].start=time;
        p[i].rt=p[i].start-p[i].at;
        time+=p[i].bt;
        p[i].ct=time;
        p[i].tat=p[i].ct-p[i].at;
        p[i].wt=p[i].tat-p[i].bt;
    }

    double totalTAT=0, totalRT=0;
    printf("\nFCFS Scheduling:\nP\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for(i=0;i<n;i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt, p[i].rt);
        totalTAT+=p[i].tat; totalRT+=p[i].rt;
    }
    printf("\nAverage TAT = %.2f\nAverage RT = %.2f\n", totalTAT/n, totalRT/n);
}
