#include<stdio.h>

int main()
{
   float sal;
   printf("\nENter a salary ");
   scanf("%f",&sal);
   if(sal >=25000 && sal<=40000)
       printf("Manager\n");
   else
      if(sal>=15000 && sal<25000)
         printf("Accountant\n");
      else
         printf("cleark\n");
   
   
   return 0;
}
