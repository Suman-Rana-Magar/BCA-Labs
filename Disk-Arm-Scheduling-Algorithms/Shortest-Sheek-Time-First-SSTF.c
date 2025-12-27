#include <stdio.h>
#include <stdlib.h>
int main() {
    int requestCount;
    printf("Enter number of requests: ");
    scanf("%d", &requestCount);
    int requests[requestCount];
    printf("Enter the requests:\n");
    for (int i = 0; i < requestCount; i++) {
        scanf("%d", &requests[i]);
    }
    int head;
    printf("Enter initial head position: ");
    scanf("%d", &head);
    int queue[requestCount + 1];
    int queueIndex = 0;
    queue[queueIndex] = head;
    int nearestDistance, nearestIndex;
    for (int j = 0; j < requestCount; j++) {
        nearestDistance = -1;
        for (int i = 0; i < requestCount; i++) {
            if (requests[i] == -1)
                continue;
            int distance = abs(requests[i] - head);
            if (nearestDistance == -1 || distance < nearestDistance) {
                nearestDistance = distance;
                nearestIndex = i;
            }
        }
        head = requests[nearestIndex];
        queue[++queueIndex] = head;
        requests[nearestIndex] = -1;
    }
    printf("\nSeek sequence:\n");
    for (int i = 0; i <= queueIndex; i++) {
        printf("%d", queue[i]);
        if (i != queueIndex)
            printf(" -> ");
    }
    printf("\n");
    return 0;
}