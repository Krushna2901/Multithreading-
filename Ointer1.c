
#include<stdio.h>
void fun(int *a,int *b)
{
    *a = 67;
   *b =  45;
}
int main()
{
   int i=5,j=2;
    fun(&i,&j);
   printf("%d\n%d",i,j);
   return 0;
}
