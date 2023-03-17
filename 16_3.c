#include<stdio.h>
#include<unistd.h>


int Asum(int brr[])
{
    int i=0,sum=0;   
    for(i=0;i<5;i++)
    {
        sum+=brr[i];
        printf("%d\t",brr[i]);
    }
    return sum;
}

int main()
{
    int arr[] = {82,35,2,567,68};
  
    int r = Asum(&arr[0]);
    printf("\n");
    printf("arr = %d\n",arr);
    printf("&arr = %d\n",&arr);
    printf("&arr[0] = %d\n",&arr[0]);
    printf("&arr[1] = %d\n",&arr[1]);

    printf("\nSum of all number is :: %d",r); 

    return 0;
}