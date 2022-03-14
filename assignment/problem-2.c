#include<stdio.h>
#include<unistd.h>

int main(){
    printf("opening a info.txt file from vim\n");
    int ret = execl("/Desktop/Linux/assignment/problem","",0);
    if(ret==-1){
        printf(" exclc returned error %d\n",ret);
    }
    return 0;
}