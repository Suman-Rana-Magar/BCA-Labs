// 5. MFU (Most Frequently Used) Page Replacement
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
    int freq[frames];
    for(int i=0; i<frames; i++) {
        memory[i] = -1; freq[i] = 0;
    }
    int hit = 0, miss = 0;
    for(int i=0; i<n; i++) {
        int found = 0;
        for(int j=0; j<frames; j++) {
            if(memory[j] == pages[i]) {
                found = 1; hit++; freq[j]++;
                break;
            }
        }
        if(found) {
            printf("%d: ", pages[i]);
            for(int j=0; j<frames; j++) {
                if(memory[j] == -1) printf("- ");
                else printf("%d ", memory[j]);
            }
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
            freq[empty] = 1;
        } else {
            int maxFreq = freq[0], victim = 0;
            for(int j=1; j<frames; j++) {
                if(freq[j] > maxFreq) {
                    maxFreq = freq[j];
                    victim = j;
                }
            }
            memory[victim] = pages[i];
            freq[victim] = 1;
        }
        printf("%d: ", pages[i]);
        for(int j=0; j<frames; j++) {
            if(memory[j] == -1) printf("- ");
            else printf("%d ", memory[j]);
        }
        printf("Miss\n");
    }
    printf("Total Hits: %d\nTotal Misses: %d\n", hit, miss);
    return 0;
}