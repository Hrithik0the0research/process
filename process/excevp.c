#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
char *prog="ls";
char *args[]={prog,"-l","/home/hrithik/Desktop/process",NULL};
execvp(prog,args);
return 0;

}
