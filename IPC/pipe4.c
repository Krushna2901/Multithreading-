#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int  main()
{
       FILE *fp;
       int ch;
       char buffer[BUFSIZ+1];
        memset(buffer,'\0',sizeof(buffer));
        
       fp =  popen("sl -a ","r");
       if(fp!=NULL)
       {     
              ch  = fread(buffer,sizeof(char),BUFSIZ,fp);
              if(ch>0)
              { 
                   printf("output is ::\n%s\n",buffer);
              }
             pclose(fp);
            exit(EXIT_SUCCESS);
        }
        exit(EXIT_FAILURE);

}    
