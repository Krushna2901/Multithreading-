#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *arr = NULL;
    int n=0;
    printf("\nInput a size of array ::");
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf("%d\t",arr[j]);
    }
    return 0;
}