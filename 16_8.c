#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>


sem_t sema;

void *fun(void * args)
{
    printf("\nInside fun :\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",i);
    }
    sem_post(&sema);
}
void *gun(void * args)
{
    sem_wait(&sema);
    printf("\nInside gun :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    pthread_t thread1,thread2;
    sem_init(&sema,0,0);
    printf("\nInside main");
    pthread_create(&thread1,NULL,&fun,NULL);
    sleep(5);
    pthread_create(&thread2,NULL,&gun,NULL);
   
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    sem_destroy(&sema);
    return 0;
}