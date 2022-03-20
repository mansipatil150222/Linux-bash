//write a program such that parent process create two child processes
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int fd1, fd2;

    fd1 = open("input.txt", O_RDONLY); //to read the file(in readonly mode)
    fd2 = open("output.txt", O_CREAT | O_RDWR , 777);

    char readed[18];
    while ((read(fd1, readed, 18)) > 0){
    printf("%s",readed);
    } // reading the file 
    int i;
    if (fd1>0){
        if((i = write(fd2, readed, 18)) < 0){
            perror("error occured while writing to a file");
        }
    }
    int close(int fd1);
    int close(int fd2);

    return 0;
}
