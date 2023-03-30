#include<stdio.h>
#include<unistd.h>

int main()
{
   int status,mypipe[2];
   pipe(mypipe);
   pid_t pid = fork();

   if(pid ==0)
   {
      close(mypipe[0]);
      write(mypipe[1],"a",1);
      printf("Child process sent 'a'\n");
      close(mypipe[1]);
   }
   else{
       char buffer[21];
       close(mypipe[1]);
       int pd_child = wait(&status);
       int length = read(mypipe[0],buffer,20);
       buffer[length] = '\0';
       printf("Parent Process received %s\n",buffer);
       close(mypipe[0]);
  }
   return 0;
}
