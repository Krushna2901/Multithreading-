#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

sem_t basic;

void *fun(void *arg)
{

      printf("inside fun %d",(int *)arg);
      sem_post(&basic);
}
void *gun(void *arg)
{
       sem_wait(&basic);
       printf("\nInside gun %d",(int *)arg);
}
int main()
{
        pthread_t mythread[2];
        
        sem_init(&basic,0,0);
        pthread_create(&mythread[0],0,&fun,(void *)5643);
        pthread_create(&mythread[1],0,&gun,(void *)643);

        pthread_join(mythread[0],0);        
        pthread_join(mythread[1],0);
  
        sem_destroy(&basic);
        return 0;
}