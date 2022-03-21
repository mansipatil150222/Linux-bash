#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc, char *argv[]){
    int i;
    printf("\n file name: %s\n",argv[0]);
    printf("\n total number of arg:%d\n",argc);
    execl(argv[1],argv[2],0);
}