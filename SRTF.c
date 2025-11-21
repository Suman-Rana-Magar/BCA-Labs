#include <stdio.h>

typedef struct {
    int pid, at, bt, ct, tat, wt, rt, start, rem;
} Process;

int main() {
    int n,i,complete=0,t=0;
    printf("Enter number of processes: ");
    scanf("%d",&n);

    Process p[n];
    for(i=0;i<n;i++){
        p[i].pid=i+1;
        printf("Enter AT and BT of P%d: ", i+1);
        scanf("%d%d",&p[i].at,&p[i].bt);
        p[i].rem=p[i].bt;
        p[i].start=-1;
    }

    while(complete!=n){
        int idx=-1,mn=1e9;
        for(i=0;i<n;i++)
            if(p[i].at<=t && p[i].rem>0 && p[i].rem<mn){ mn=p[i].rem; idx=i; }
        if(idx==-1){ t++; continue; }

        if(p[idx].start==-1) p[idx].start=t;
        p[idx].rem--; t++;
        if(p[idx].rem==0){
            complete++;
            p[idx].ct=t;
            p[idx].tat=p[idx].ct-p[idx].at;
            p[idx].wt=p[idx].tat-p[idx].bt;
            p[idx].rt=p[idx].start-p[idx].at;
        }
    }

    double totalTAT=0,totalRT=0;
    printf("\nSRTF Scheduling:\nP\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for(i=0;i<n;i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
        totalTAT+=p[i].tat; totalRT+=p[i].rt;
    }
    printf("\nAverage TAT = %.2f\nAverage RT = %.2f\n", totalTAT/n,totalRT/n);
}
