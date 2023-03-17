#include<stdio.h>
#include<stdlib.h>

void fun()
{
    printf("\nInside fun");
}
void gun(void *sun)
{
    printf("\nInside gun ::%d ",sun);
    fun();
}
int main()
{
    printf("\nfun :: %d",&fun);
    gun(&fun);    
    return 0;
}