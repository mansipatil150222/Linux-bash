#include<stdio.h>
#include<unistd.h>
int main(){
    int pid_1,pid_2;
    printf("Current Process id = %d\n",getpid());

    pid_1=vfork();
    if(pid_1==0){
        printf("the child process pid = %d\n", getpid());
        printf("the child parent process ppid = %d\n", getppid());
    }

    else{
        sleep(3);
        printf("the child process pid = %d\n", getpid());
        printf("the child parent process ppid = %d\n", getppid());
    }
    while (0);
    
    return 0;
}