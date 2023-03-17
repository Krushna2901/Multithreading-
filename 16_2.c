#include<stdio.h>
#include<unistd.h>

void fun(int *a,int *b)
{
    *a = 89;
    *b = 33;
}

int main()
{
    int x =50,y=70;
    printf("\nMain values :: %d , %d",x,y);
    fun(&x,&y);
    printf("\nModified values :: %d , %d",x,y);
    return 0;
}