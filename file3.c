#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0,fd1=0;
    char fname[20];
    char data[]={"Hello World"};
    printf("\nENter name of file::");
    scanf("%s",fname);
    fd = open(fname,O_RDWR);
    if(fd==-1)
    {
         printf("\nUnable to open file ::");
         return -1;
    }
    else{
       printf("\nSuccessfully Created ");
    }
     fd1= write(fd,data,12);
    printf("\n%d bytes read from file : ",fd);
    printf("\ndata from the file is :: %s",data);
    return 0;

    return 0;
}
