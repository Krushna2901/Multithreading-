#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
     int fd=0,fd1=0,fd2=0;
     char fname[20];
     char data[]={"Welcome to multithreading"};
     printf("\nEnter name of file ::");
     scanf("%s",fname);
     fd = creat(fname,0777);
     if(fd ==-1){
       printf("\nUnable to create");
     }
     else{
       printf("\nFIle created successfully");
     }
     fd1=  write(fd,data,20);
     return 0;
}



