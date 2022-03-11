#include<stdio.h>
#include<unistd.h>
int main(){
    int pid_1;
    printf("Current Process id = %d\n",getpid());

    pid_1=fork();
    if(pid_1==0){
        printf("the child process pid = %d\n", getpid());
        printf("the child parent process ppid = %d\n", getppid());
    }

    else{
        printf("the child process pid = %d\n", getpid());
        printf("the child parent process ppid = %d\n", getppid());
    }
    while (1);
    
    return 0;
}