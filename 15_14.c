

#include<stdio.h>

int main()
{
   int i,j,k=5;
   for(i=0;i<5;i++)
   {   
           for(j=0;j<5;j++)
            {
                    if(i>j){
                          printf("  ");
                      }
                    else{
                        printf(" %d ",k);
                 }
            }
           printf("\n");
     }
    return 0;
} 
