#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>


int main()
{
    FILE *read_fp;
    char buffer[1024];
    int chars_read;
    memset(buffer,'\0',sizeof(buffer));
    read_fp = popen("uname -a","r");
    if(read_fp !=NULL)
     {
           chars_read = fread(buffer,sizeof(char),1024,read_fp);
           if(chars_read>0)
           {
               printf("Output was :: \n%s\n",buffer);
           }
          pclose(read_fp);
          exit(EXIT_SUCCESS);
      }
     exit(EXIT_FAILURE);

    return 0;
}
