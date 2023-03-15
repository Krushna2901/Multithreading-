#include<stdio.h>

int main()
{
 int x =20,y=40,z=45;
 if(x>y && x>z)
 {
   printf("Biggest x ");
 }
else if(y>x &&y>z)
 {
   printf("\nBiggest y");
}
else{
  printf("\nBiggest z");
}
return 0;
}
