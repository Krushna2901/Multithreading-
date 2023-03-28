#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    FILE *fp;
    char buffer[BUFSIZ+1];
    int chars_read;
   
    memset(buffer,'\0',sizeof(buffer));
    fp = popen("cat pipe2.c |wc -l","r");
    if(fp!=NULL)
    { 
          chars_read = fread(buffer,sizeof(char),BUFSIZ,fp);
          while(chars_read >0)
          { 
              buffer[chars_read-1]='\0';
              printf("Reading :\n %s \n",buffer);
              chars_read = fread(buffer,sizeof(char),BUFSIZ,fp);
           }
           pclose(fp);
           exit(EXIT_SUCCESS);
    }
}
