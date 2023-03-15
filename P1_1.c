#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *worker(void *arg)
{
    printf("\nThis is worker Thread :: %d",(int*)arg);
    while((int *)arg!=0)
    {
        printf("%d\t",(int *)arg);
        arg--;
    }
    pthread_exit(NULL);
}

void *worker1(void *arg)
{
    printf("\nThis is worker Thread :: %d",(int*)arg);
    pthread_exit(NULL);
}

int main()
{
    pthread_t my_thread1,my_thread2;
    pthread_create(&my_thread1,NULL,&worker,(void *)4);
    pthread_create(&my_thread2,NULL,&worker1,(void *)7);
    printf("main");


   
    pthread_exit(NULL);  

    return 0;
}
