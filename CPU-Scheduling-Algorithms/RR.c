#include <stdio.h>

typedef struct {
    int pid, at, bt, ct, tat, wt, rt, start, rem;
} Process;

int main() {
    int n,i,timeq;
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

    printf("Enter Time Quantum: ");
    scanf("%d",&timeq);

    int t=0, completed=0;
    while(completed<n){
        int idle=1;
        for(i=0;i<n;i++){
            if(p[i].rem>0 && p[i].at<=t){
                idle=0;
                if(p[i].start==-1) p[i].start=t;
                int run=(p[i].rem>timeq?timeq:p[i].rem);
                t+=run;
                p[i].rem-=run;
                if(p[i].rem==0){
                    completed++;
                    p[i].ct=t;
                    p[i].tat=p[i].ct-p[i].at;
                    p[i].wt=p[i].tat-p[i].bt;
                    p[i].rt=p[i].start-p[i].at;
                }
            }
        }
        if(idle) t++;
    }

    double totalTAT=0,totalRT=0;
    printf("\nRound Robin Scheduling:\nP\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for(i=0;i<n;i++){
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
        totalTAT+=p[i].tat; totalRT+=p[i].rt;
    }
    printf("\nAverage TAT = %.2f\nAverage RT = %.2f\n", totalTAT/n,totalRT/n);
}
