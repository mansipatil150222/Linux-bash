this lines will be added to file. this one is also be addedlude<stdlib.h>
#include<string.h>

int main(){
    int fd1, fd2;
    fd1 = open("input.txt", O_RDONLY, 777); //to read the file(in readonly mode)
    fd2 = open("output.txt", O_CREAT | O_RDWR | O_APPEND, 777);
    char readed[18];
    read(fd1, readed, 18);
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
