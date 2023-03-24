#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
   int fd =0,fd1=0;
   char fname[20];
   char data[] = {"WelCome to UnicoreAIMinds "};
   printf("\nEnter name of file ::");
   scanf("%s",fname);
   fd = open(fname,O_RDWR);
   if(fd ==-1)
   {
       printf("\nUnable to openfile ");
   }
   else{
      printf("\nFile open successfully");
   }
   fd1 = read(fd,data,30);
   write(1,data,fd1);
   return 0;
}
