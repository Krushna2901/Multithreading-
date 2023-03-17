#include<stdio.h>
#include<stdlib.h>


void fun()
{
    static int i=0;
    if(i<11)
    {
        printf("%d\t",i);
        i++;
        fun();
    }

}
int main()
{
    fun();
    return 0;
}