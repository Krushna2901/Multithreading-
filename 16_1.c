#include<stdio.h>
#include<unistd.h>


void sum(int *x,int *y)
{
    printf("%d + %d = %d",*x,*y,(*x+*y));
}
int main()
{
    int a,b;
    a=45,b=90;
    sum(&a,&b);
    return 0;
}