#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
pid_t pid;
pid=fork();
if(pid<0){

printf("no process has been created");
}

else{

printf("the child process=%d and parent process=%d",getpid(),getppid());
}

return 0;
}
