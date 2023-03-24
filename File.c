#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
   int fd=0,fd1=0,fd2=0;
   char fname[20];
   char fname1[20];
   char buffer[1024];
   printf("\nEnter a file name ::");
    scanf("%s",fname);
    fd = open(fname,O_RDWR);
    if(fd ==-1){
    printf("\nunable to open file");
    }
    else{
       printf("\nFile open  successfully ::%d",fd);
   }
   printf("\nDestination of file");
  scanf("%s",fname1);
  fd1= creat(fname1,0777);
   while((fd2 =read(fd,buffer,sizeof(buffer)))!=0)
    {
         write(fd1,buffer,fd2);
}
 close(fd);
close(fd1);
 return 0;
}
