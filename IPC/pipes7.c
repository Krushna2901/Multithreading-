/* Readling larger amout of data from a pipe   */


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>


int main()
{
   FILE *fp;
   char buffer[BUFSIZ+1];
   int chars_read;
   memset(buffer,'\0',sizeof(buffer));
   fp= popen("ps ax","r");
   if(fp!=NULL)
   {
        chars_read = fread(buffer,sizeof(char),BUFSIZ,fp);
        while(chars_read >0)
        {     
             buffer[chars_read -1] = '\0';
            printf("Reading %d :-\n%S\n",BUFSIZ);
             chars_read = fread(buffer,sizeof(char),BUFSIZ, fp);
        }
        pclose(fp);
        exit(EXIT_SUCCESS);
   }
     exit(EXIT_FAILURE); 
   return 0;
}
