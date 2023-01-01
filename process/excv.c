#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void){
char *pg="/bin/ls";
char *all[]={pg,"-l","/root/home/hrithik/Desktop/process",NULL};
printf("hello");
execv(pg,all);

return 0;


}
