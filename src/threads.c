#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// Thread function
void *thread_func(void *vargp)
{
    for (int i = 1; i < 8; i++)
    {
        printf("\t%d spawned thread!\n", i);
        sleep(3);
    }
    return NULL;
}

int main()
{
    // Threads
    pthread_t thread_1;
    pthread_create(&thread_1, NULL, thread_func, NULL);
    pthread_t thread_2;
    pthread_screate(&thread_2, NULL, thread_func, NULL);
    pthread_t thread_3;
    pthread_create(&thread_3, NULL, thread_func, NULL);

    // main function
    for (int i = 1; i < 5; i++)
    {
        printf("%d number main thread!\n", i);
        sleep(3);
    }

    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);
    pthread_join(thread_3, NULL);

    printf("After Thread\n");
    exit(0);
}
