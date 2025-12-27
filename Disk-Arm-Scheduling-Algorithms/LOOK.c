#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int direction = (currHead > prevHead) ? 1 : 0;
    int sorted[requestCount];
    memcpy(sorted, requests, requestCount * sizeof(int));
    for (int i = 0; i < requestCount - 1; i++) {
        for (int j = i + 1; j < requestCount; j++) {
            if (sorted[i] > sorted[j]) {
                int temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }
    int pos = 0;
    while (pos < requestCount && sorted[pos] < currHead) {
        pos++;
    }
    int queue[requestCount + 1];
    int queueIndex = 0;
    queue[queueIndex++] = currHead;
    if (direction == 1) {
        for (int i = pos; i < requestCount; i++) {
            queue[queueIndex++] = sorted[i];
        }
        for (int i = pos - 1; i >= 0; i--) {
            queue[queueIndex++] = sorted[i];
        }
    } else {
        for (int i = pos - 1; i >= 0; i--) {
            queue[queueIndex++] = sorted[i];
        }
        for (int i = pos; i < requestCount; i++) {
            queue[queueIndex++] = sorted[i];
        }
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