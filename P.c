#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

sem_t sema1;

void *fun(void *args)
{
    printf("\nInside fun");
    // sleep(5);
    sem_post(&sema1);
    
}
void *gun(void *args)
{
    sem_wait(&sema1);
    printf("\nInside gun");
    //sleep(5);
    
}
int main()
{
    pthread_t thread1,thread2;
    printf("\nmain1");
    sem_init(&sema1,0,0);
    pthread_create(&thread1,NULL,&fun,NULL);
    pthread_create(&thread2,NULL,&gun,NULL);
    printf("\nmain2");
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    printf("\nmain3");
    sem_destroy(&sema1);
    return 0;
}