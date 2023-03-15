#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>



void *worker(void *arg)
{
    printf("\nThis is worker Thread :: %d",(int*)arg);
    pthread_exit(NULL);
}
void *gun(void *arg)
{
    printf("\nThis is gun Thread");
    pthread_exit(NULL);
}
int main()
{
    pthread_t my_thread;
    pthread_t my_thread1;
    int ret ;
    printf("\nCreating main thread");
    
    pthread_create(&my_thread1,NULL,&gun,NULL);
    pthread_create(&my_thread,NULL,&worker,(void *)45);   
    pthread_exit(NULL);

    return 0;
}