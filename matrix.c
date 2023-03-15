#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int *arr = malloc((n*n)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",*arr[i][j]);
        }
    }
    
    return 0;
}