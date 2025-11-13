#include <stdio.h>

struct Process {
    int at;   // Arrival Time
    int bt;   // Burst Time
    int ct;   // Completion Time
    int tat;  // Turnaround Time
    int wt;   // Waiting Time
    int rt;   // Response Time
    int done; // Completion flag
};

int main() {
    int processNum;
    printf("Enter the no. of processes: ");
    scanf("%d", &processNum);

    struct Process p[processNum];
    
    for (int i = 0; i < processNum; i++) {
        printf("\nEnter the arrival time (AT) of process P%d: ", i + 1);
        scanf("%d", &p[i].at);
        if (p[i].at < 0) {
            printf("Negative arrival time detected! Setting AT = 0.\n");
            p[i].at = 0;
        }
        printf("Enter the burst time (BT) of process P%d: ", i + 1);
        scanf("%d", &p[i].bt);
        if (p[i].bt <= 0) {
            printf("Invalid burst time! Setting BT = 1.\n");
            p[i].bt = 1;
        }
        p[i].done = 0;
    }

    int completed = 0, currentTime = 0;
    float totalWT = 0, totalTAT = 0;

    while (completed < processNum) {
        int idx = -1;
        int minBT = 99999;

        // Find process with minimum BT among arrived and not done
        for (int i = 0; i < processNum; i++) {
            if (p[i].at <= currentTime && p[i].done == 0) {
                if (p[i].bt < minBT) {
                    minBT = p[i].bt;
                    idx = i;
                } 
                else if (p[i].bt == minBT && p[i].at < p[idx].at) {
                    // if tie, prefer one that arrived earlier
                    idx = i;
                }
            }
        }

        if (idx == -1) {
            currentTime++; // move time if nothing has arrived
        } else {
            p[idx].ct = currentTime + p[idx].bt;        // Completion time
            p[idx].tat = p[idx].ct - p[idx].at;         // Turnaround time
            p[idx].wt = p[idx].tat - p[idx].bt;         // Waiting time
            p[idx].rt = p[idx].wt;                      // Response time
            p[idx].done = 1;

            totalWT += p[idx].wt;
            totalTAT += p[idx].tat;

            completed++;
            currentTime = p[idx].ct; // Update time
        }
    }

    // Print table
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for (int i = 0; i < processNum; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               i + 1, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt, p[i].rt);
    }

    // Averages
    printf("\nAverage Waiting Time (AWT): %.2f", totalWT / processNum);
    printf("\nAverage Turnaround Time (ATAT): %.2f\n", totalTAT / processNum);

    return 0;
}
