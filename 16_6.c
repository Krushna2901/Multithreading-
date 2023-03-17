/*Leaders in an array
if it is greater than all the elements to its right side. 
And the rightmost element is always a leader. 
For example array {6, 7, 4, 3, 5, 2}, 
leaders are 7, 5 and 2*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int arr[]={6,7,4,3,5,2};
    int i,j,n=6;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                break;
            }
        }
        if(j==n)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}