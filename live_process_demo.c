#include<stdio.h>
#include<unistd.h>
int main(void){
    printf("My process id=%d\n",getpid());
    printf("My parent id=%d\n",getppid());
    printf("linux kernal\n");
    while(1);
    return 0;
}