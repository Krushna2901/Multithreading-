/* sending output to an external file   */



#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char buffer[BUFSIZ +1];
  sprintf(buffer,"Once upon a time, there was ...\n");
 
  fp= popen("od -b","w");           //od -b generate octal value of above string

  if(fp!=NULL)
  {  
       fwrite(buffer,sizeof(char),strlen(buffer), fp);
       pclose(fp);
       exit(EXIT_SUCCESS);
    }
   exit(EXIT_FAILURE);

  return 0;
}
