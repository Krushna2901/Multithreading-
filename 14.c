#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *fun(void * arg)
{
    
    printf("\ninside fun");
   
    
}
void *gun(void * arg)
{
     sleep(3);
    printf("\ninside gun");
    pthread_exit(NULL);
}
int main()
{
    pthread_t thread1,thread2;
    printf("\nMain");
    pthread_create(&thread1,NULL,&fun,NULL);    
    pthread_create(&thread2,NULL,&gun,NULL);
    
    pthread_join(thread1,NULL);
    
    pthread_join(thread2,NULL);
    printf("\nMain2");
    return 0;
}