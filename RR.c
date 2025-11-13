#include <stdio.h>

struct Process {
    int at;   // Arrival Time
    int bt;   // Burst Time
    int ct;   // Completion Time
    int tat;  // Turnaround Time
    int wt;   // Waiting Time
    int rt;   // Remaining Time
};

int main() {
    int n, tq;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter Arrival Time (AT) for Process P%d: ", i + 1);
        scanf("%d", &p[i].at);
        if (p[i].at < 0) {
            printf("Negative arrival time detected! Setting AT = 0.\n");
            p[i].at = 0;
        }

        printf("Enter Burst Time (BT) for Process P%d: ", i + 1);
        scanf("%d", &p[i].bt);
        if (p[i].bt <= 0) {
            printf("Invalid burst time! Setting BT = 1.\n");
            p[i].bt = 1;
        }

        p[i].rt = p[i].bt;  // Initialize remaining time
        p[i].ct = p[i].tat = p[i].wt = 0;
    }

    printf("\nEnter Time Quantum: ");
    scanf("%d", &tq);

    int completed = 0, currentTime = 0;
    float totalWT = 0, totalTAT = 0;
    int done[n];
    for (int i = 0; i < n; i++) done[i] = 0;

    // Queue simulation
    while (completed < n) {
        int flag = 0;

        for (int i = 0; i < n; i++) {
            if (p[i].at <= currentTime && p[i].rt > 0) {
                flag = 1; // A process is available
                if (p[i].rt > tq) {
                    currentTime += tq;
                    p[i].rt -= tq;
                } else {
                    currentTime += p[i].rt;
                    p[i].rt = 0;
                    p[i].ct = currentTime;
                    p[i].tat = p[i].ct - p[i].at;
                    p[i].wt = p[i].tat - p[i].bt;
                    totalWT += p[i].wt;
                    totalTAT += p[i].tat;
                    done[i] = 1;
                    completed++;
                }
            }
        }

        if (flag == 0) {
            // If no process has arrived yet, move time ahead
            currentTime++;
        }
    }

    // Output results
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i + 1, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }

    printf("\nAverage Waiting Time: %.2f", totalWT / n);
    printf("\nAverage Turnaround Time: %.2f\n", totalTAT / n);

    return 0;
}
