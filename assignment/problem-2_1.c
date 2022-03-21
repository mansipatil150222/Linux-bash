#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>

int main(){
    int fd;
    fd = open("/Desktop/Linux/assignment/prob2",O_RDONLY,777);
    printf(" file descriptor of a open system is %d\n",fd);
    return 0;

}