#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

<<<<<<< HEAD


int main(){
    struct stat st;
    int fd;

    stat("lseek.c",&st);
=======
int main(){
    struct stat st;
    int fd;
    stat("info1.txt",&st);
>>>>>>> eccc7bfdda41ca3f32a5169f808ec14000224b10
    printf("File size = %lu\n",(st.st_size)); 
    printf("File inode = %lu\n",(st.st_ino));
    printf("File size of blocks = %lu\n",(st.st_blksize));
    close(fd);
    return 0;
}
