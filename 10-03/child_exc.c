#include <stdio.h>
#include<sys/types.h>
#include<sys/types.h>
#include <unistd.h>
#include<stdlib.h>
int main(){
        pid_t pid;
        int option, stat;
        while(1){
                printf("enter 1 to exec 'ls' program in child process and 0 to exit\n");
                scanf("%d",&option);
                if(!option)
                        exit(0);
                printf("\n");
                if(fork()==0){
                execl("/bin/ls","ls",0);
                exit(0);
        }
        return 0;
}
