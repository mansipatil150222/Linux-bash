#include<stdio.h>
#include<unistd.h>

int main(){
    int ret;

    ret=execl("/usr/bin/vim","vim","info1.txt",0);
    if(ret==-1){
        printf("excl returened error %d\n",ret);
    }
    return 0;
    
    }