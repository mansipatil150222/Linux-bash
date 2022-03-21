#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

void callback1(void){
    printf("callback1\n");
}
void callback2(void){
    printf("callback2\n");
}
void callback3(void){
    printf("callback3\n");
}

int main(){
    printf("registring callback1\n");
    atexit(callback1);

    printf("registring callback2\n");
    atexit(callback2);

    printf("registring callback3\n");
    atexit(callback3);

    _exit(0);
    }