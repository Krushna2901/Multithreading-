#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
   FILE *FP;
   char  buffer[8192];
   memset(buffer,'\0',sizeof(buffer));
   int iret = 0;
   FP = popen("lsb_release -a","r");            //system version details
   if(FP != NULL)
   {
        iret = fread(buffer,sizeof(char),8192,FP);
        if(iret >0){
              printf("\n%s\n",buffer);}
        
        pclose(FP);
       exit(EXIT_SUCCESS);
   }
   exit(EXIT_FAILURE);

}
