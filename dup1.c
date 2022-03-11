#include<stdio.h>
#include<fcntl.h>

int main(){
    int fd1, fd2, fd3, fd4,fd5;
    umask(0);
    fd1=open("linux.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);//3
    fd2=open("linuxNew.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);//4 used
    printf("fd1=%d\n", fd1);//3
    printf("fd2=%d\n", fd2);//4
    fd3=dup(fd1);//create duplicate of fd1
    fd4=dup2(fd1,4);//create duplicate of 4
    fd5=fcntl(fd1,F_DUPFD);//generate duplicate using fcntl()
    printf("fd3_dup of fd1=%d\n",fd3); //print duplicate
    printf("fd4_dup of fd1=%d\n",fd4); //print duplicate of duplicate
    printf("fd4_dup of fd1 using fcntl=%d\n",fd5); // print duplicate created using fcntl()

    close(fd1);
    close(fd2);
    close(fd3);
    close(fd4);
    close(fd5);

    return 0;

}