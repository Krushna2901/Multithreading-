#include<stdio.h>

int main()
{
    char n='\0';
    printf("\nInput a number ::");
    scanf("%c",&n);
    if(n>='A' && n<='Z')
    {
      printf("\n Capital");
    }
    else{
      printf("\n Not Capital");
    } 
   return 0;
}
