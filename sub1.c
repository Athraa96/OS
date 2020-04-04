#include <stdio.h>
#include<sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
printf("\nSend two numbers using sub1.c\nand implement the process of\nsub them in sub.c\n\n");
printf("sub1.c: The two numbers are %s%s\n",argv[1],argv[2]);
printf("My PID of sub1.c: %d\n",(int) getpid());
pid_t pid= fork();
printf("\n   fork returned: %d\n",(int) pid);
if(pid<0)
     {
	perror("fork failed");
     }
if(pid==0)
     {
	printf("we are in the child process\n");
	printf("calling sub.c from sub process\n");
	char *args[] = {"./sub", argv[1], argv[2], NULL};
	execv("./sub", args);
     }
else
     {
	printf("\n we are in the parent process\n");
     }
return 0;
}

