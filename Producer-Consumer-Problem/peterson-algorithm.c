#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#define BUFFER_SIZE 5
int buffer[BUFFER_SIZE];
int in = 0, out = 0;
int count = 0;
// Peterson's algorithm variables
int turn = 0;           // whose turn (0 = producer, 1 = consumer)
int interested[2] = {0, 0};  // 0: producer, 1: consumer
void enter_critical(int process) {
    int other = 1 - process;
    interested[process] = 1;
    turn = other;
    while (interested[other] && turn == other);
}
void exit_critical(int process) {
    interested[process] = 0;
}
void* producer(void* arg) {
    int item = 1;
    while(1) {
        sleep(1);
        enter_critical(0);  // producer is process 0
        while(count == BUFFER_SIZE);  // wait if full
        buffer[in] = item;
        printf("Producer produced: %d\n", item);
        in = (in + 1) % BUFFER_SIZE;
        count++;
        item++;
        exit_critical(0);
    }
}
void* consumer(void* arg) {
    while(1) {
        sleep(2);
        enter_critical(1);  // consumer is process 1
        while(count == 0);  // wait if empty
        int item = buffer[out];
        printf("Consumer consumed: %d\n", item);
        out = (out + 1) % BUFFER_SIZE;
        count--;
        exit_critical(1);
    }
}
int main() {
    pthread_t prod, cons;
    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);
    pthread_join(prod, NULL);
    pthread_join(cons, NULL);
    return 0;
}