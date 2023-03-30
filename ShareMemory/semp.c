#include<unistd.h>
#include<stdlib.h>
#include<semaphore.h>
#include<stdio.h>
#include<pthread.h>


sem_t sema;

void *fun(void *arg)
{
    sem_post(&sema);
    printf("Inside fun\n");
}
void *gun(void *arg)
{
    sleep(2);
    printf("\nInside gun");
    sem_wait(&sema);
}

int main()
{
   sem_init(&sema,0,0);
   pthread_t t1,t2;
   pthread_create(&t1,NULL,&fun,NULL);
   pthread_create(&t2,NULL,&gun,NULL);
   pthread_join(t1,NULL);
   pthread_join(t2,NULL);
    sem_destroy(&sema);
   pthread_exit(0);
}
   
