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
    int prevHead, currHead;
    printf("Enter previous head position: ");
    scanf("%d", &prevHead);
    printf("Enter initial (current) head position: ");
    scanf("%d", &currHead);
    int queue[requestCount + 1];
    int queueIndex = 0;
    queue[queueIndex++] = currHead;
    for (int i = 0; i < requestCount; i++) {
        queue[queueIndex++] = requests[i];
    }
    printf("\nSeek sequence:\n");
    for (int i = 0; i < queueIndex; i++) {
        printf("%d", queue[i]);
        if (i != queueIndex - 1)
            printf(" -> ");
    }
    printf("\n");
    int totalMovement = 0;
    for (int i = 1; i < queueIndex; i++) {
        totalMovement += abs(queue[i] - queue[i - 1]);
    }
    printf("Total head movement: %d cylinders\n", totalMovement);
    return 0;
}