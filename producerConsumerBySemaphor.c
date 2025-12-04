#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int in = 0, out = 0;

// Semaphores
sem_t empty;  // counts empty slots
sem_t full;   // counts filled slots
pthread_mutex_t mutex;

void* producer(void* arg) {
    int item = 1;

    while (1) {
        sem_wait(&empty);           // wait for empty slot
        pthread_mutex_lock(&mutex); // lock buffer

        buffer[in] = item;
        printf("Producer produced: %d\n", item);
        in = (in + 1) % BUFFER_SIZE;
        item++;

        pthread_mutex_unlock(&mutex);
        sem_post(&full);            // signal item added

        sleep(1);
    }
}

void* consumer(void* arg) {
    while (1) {
        sem_wait(&full);            // wait for filled slot
        pthread_mutex_lock(&mutex); // lock buffer

        int item = buffer[out];
        printf("Consumer consumed: %d\n", item);
        out = (out + 1) % BUFFER_SIZE;

        pthread_mutex_unlock(&mutex);
        sem_post(&empty);           // signal slot freed

        sleep(1);
    }
}

int main() {
    pthread_t p, c;

    sem_init(&empty, 0, BUFFER_SIZE); // empty slots = buffer size
    sem_init(&full, 0, 0);            // full slots = 0
    pthread_mutex_init(&mutex, NULL);

    pthread_create(&p, NULL, producer, NULL);
    pthread_create(&c, NULL, consumer, NULL);

    pthread_join(p, NULL);
    pthread_join(c, NULL);

    sem_destroy(&empty);
    sem_destroy(&full);
    pthread_mutex_destroy(&mutex);

    return 0;
}
