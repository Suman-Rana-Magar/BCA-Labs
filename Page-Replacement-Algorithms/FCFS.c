// 1. FIFO (First In First Out) Page Replacement
#include <stdio.h>
int main() {
    int n, frames;
    printf("Enter number of pages: ");
    scanf("%d", &n);
    int pages[n];
    printf("Enter reference string:\n");
    for(int i=0; i<n; i++) scanf("%d", &pages[i]);
    printf("Enter number of frames: ");
    scanf("%d", &frames);
    int memory[frames];
    for(int i=0; i<frames; i++) memory[i] = -1;
    int front = 0, hit = 0, miss = 0;
    for(int i=0; i<n; i++) {
        int found = 0;
        for(int j=0; j<frames; j++) {
            if(memory[j] == pages[i]) {
                found = 1; hit++;
                break;
            }
        }
        if(!found) {
            miss++;
            memory[front] = pages[i];
            front = (front + 1) % frames;
        }
        printf("%d: ", pages[i]);
        for(int j=0; j<frames; j++) {
            if(memory[j] == -1) printf("- ");
            else printf("%d ", memory[j]);
        }
        printf("%s\n", found ? "Hit" : "Miss");
    }
    printf("Total Hits: %d\nTotal Misses: %d\n", hit, miss);
    return 0;
}