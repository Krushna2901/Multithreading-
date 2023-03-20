#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

volatile int counter = 0;
pthread_mutex_t myMutex;


void *mutex_testing(void *param)
{
    int i;
    for(i=0;i<5;i++)
    {
        pthread_mutex_lock(&myMutex);
        counter++;
        printf("thread %d counter = %d\n",(int *)param,counter);
        pthread_mutex_unlock(&myMutex);
    }
}
int main()
{
    int one= 1,two=2,three=3;
    pthread_t thread1,thread2,thread3;
    pthread_mutex_init(&myMutex,0);
    pthread_create(&thread1,NULL,mutex_testing,(void *)one);
    pthread_join(thread1,NULL);
    pthread_create(&thread2,NULL,mutex_testing,(void *)two);
    pthread_join(thread2,NULL);
    pthread_create(&thread3,NULL,mutex_testing,(void *)three);
    pthread_join(thread3,NULL);
    
    
    pthread_mutex_destroy(&myMutex);
    return 0;

}