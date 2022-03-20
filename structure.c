#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){
    struct stat st;
    int fd;
    stat("info1.txt",&st);
    printf("File size = %lu\n",(st.st_size)); 
    printf("File inode = %lu\n",(st.st_ino));
    printf("File size of blocks = %lu\n",(st.st_blksize));
    close(fd);
    return 0;
}
