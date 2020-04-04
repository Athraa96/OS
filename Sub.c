
include <stdio.h>
#include<unistd.h>
#include<stdlib.h> 
int main(int argc,char *argv[])
{
int var1,var2,sub;
printf("sub.c:\n");
printf("My PID of sub.c: %d\n",(int) getpid());
sscanf(argv[1],"%d",&var1);
sscanf(argv[2],"%d",&var2);
sub=var1-var2;
printf("The Result of the process of sub is: %d \n",sub);
return 0;
}
