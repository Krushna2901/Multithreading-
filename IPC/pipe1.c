#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>


int main()
{
    FILE *READ_FP;
    char buffer[BUFSIZ +1];
    int chars_read;
    memset(buffer,'\0',sizeof(buffer));
    READ_FP = popen("uname -a","r");
    if(READ_FP != NULL)
    { 
       chars_read = fread(buffer,sizeof(char),BUFSIZ,READ_FP);
       if(chars_read>0){
               printf("output was :-\n%s\n",buffer);
            }
        pclose(READ_FP);
        exit(EXIT_SUCCESS);
    }
    exit(EXIT_FAILURE);
}
