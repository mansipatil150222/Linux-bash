#include<stdio.h>
#include<unistd.h>

int main(int argc ,char *argv[]){
    printf("i am going to execute a ls programe\n");
    int ret;

    ret = execl(argv[1],argv[2],argv[3],NULL);
    if(ret == -1){
        printf("this is not supported\n");
    } 
}