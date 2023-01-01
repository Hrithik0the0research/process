#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){
pid_t pid;
pid=fork();
if(pid<0){
printf("no process creates");

}
else if(pid==0){
printf("child process=%d\n",getpid());
exit(0);
}
else{
pid=wait(NULL);
printf("parent pid %d",getppid());
printf("child id %d",pid);
}
return 0;
}
