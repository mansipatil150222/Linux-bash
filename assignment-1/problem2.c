#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(){

int fd,len;
char writebuf[35]="Hello to the seeking into the file";
char readbuf[35];

fd=open("fie_2.txt",O_CREAT|O_RDWR,777);
len = write(fd,writebuf,35);
printf("return value of write option:%d\n",len);

printf("SEEK_SET:%ld\n",lseek(fd,0,SEEK_SET));
lseek(fd,8,SEEK_SET);

printf("SEEK_CURR:%ld\n",lseek(fd,0,SEEK_CUR));

printf("SEEK_END:%ld\n",lseek(fd,-12,SEEK_END));
read(fd,readbuf,len);

printf("data from buffer: %s\n",readbuf);
close(fd);
return 0;
}