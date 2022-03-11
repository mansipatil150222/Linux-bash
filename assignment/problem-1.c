//write a program such that parent process create two child processes
#include <stdio.h>
#include<sys/types.h>
#include<sys/types.h>
#include <unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(){
        int pid;
        pid=fork();
        if(pid!=0){
                printf("this id a parent process\n");
                printf("parent process id= %d\n",getpid());
                printf("child parent's parent process pid = %d\n",getppid());
                fork();
                fork();
        }
        else{
                printf("this is a child process\n");
                printf("child process pid= %d\n",getpid());
                printf("child Parent's parent process pid= %d\n",getppid());
        }
        while(1);
        return 0;
}
