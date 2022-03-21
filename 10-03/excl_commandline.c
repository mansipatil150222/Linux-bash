#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc, char *argv[]){
    int pid_1;
    printf("Current Process id = %d\n",getpid());
    pid_1=fork();
    
    if(pid_1==0){
        // sleep(2);
        printf("the child process pid = %d\n", getpid());
        printf("the child parent process ppid = %d\n", getppid());
        int ret = execl(argv[1],argv[2],0);
    }

    else{
        wait(0);
        printf("the child process pid = %d\n", getpid());
        printf("the child parent process ppid = %d\n", getppid());
    }
    while (1);
    
    return 0;
}