#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


void *fun(void *arg)
{
    printf("\nInside fun :: %d",(void *)arg);
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread1;
    pthread_create(&thread1,NULL,&fun,(void *)45);
    pthread_join(thread1,NULL);

    return 0;
}