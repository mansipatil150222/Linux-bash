#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void){
    pid_t pid1; //pid_t data typed for PIDs (they internally integer data int data types)

    pid1 = fork();
    if(pid1==0){
        sleep(5);
        printf("pid=%d \n", getpid());
    }
    else{
        int pid2;
        printf("parent pid=%d \n",getpid());
        pid2 = wait(0);
        printf("child %d executed notmally\n",pid2);
        printf("parent progress pro pid=%d", getpid());
    }
    return 0;
}