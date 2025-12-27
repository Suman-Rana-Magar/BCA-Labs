// 2. Optimal Page Replacement
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
    int hit = 0, miss = 0;
    for(int i=0; i<n; i++) {
        int found = 0;
        for(int j=0; j<frames; j++) {
            if(memory[j] == pages[i]) {
                found = 1; hit++;
                break;
            }
        }
        if(found) {
            printf("%d: ", pages[i]);
            for(int j=0; j<frames; j++) printf("%d ", memory[j]);
            printf("Hit\n");
            continue;
        }
        miss++;
        int empty = -1;
        for(int j=0; j<frames; j++) {
            if(memory[j] == -1) { empty = j; break; }
        }
        if(empty != -1) {
            memory[empty] = pages[i];
        } else {
            int replace = 0;
            int farthest = -1;
            for(int j=0; j<frames; j++) {
                int k;
                for(k=i+1; k<n; k++) {
                    if(pages[k] == memory[j]) break;
                }
                if(k == n) { replace = j; break; }
                if(k > farthest) {
                    farthest = k;
                    replace = j;
                }
            }
            memory[replace] = pages[i];
        }
        printf("%d: ", pages[i]);
        for(int j=0; j<frames; j++) printf("%d ", memory[j]);
        printf("Miss\n");
    }
    printf("Total Hits: %d\nTotal Misses: %d\n", hit, miss);
    return 0;
}