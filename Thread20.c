#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#define BIG 10000000000UL

int counter = 0;

void *Count(void *arg)
{ 
     for(int i = 0;i<BIG;i++)
     {
        counter++;
     }
}
int main()
{
    pthread_t t;
    pthread_create(&t,NULL,&Count,NULL);
    pthread_join(t,NULL);
    return 0;
}