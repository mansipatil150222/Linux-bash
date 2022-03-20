#include<stdio.h>
#include<string.h>
int main(){
    char buff1[10];
    char buff2[100];
    int ret;
    memcpy(buff1,"madam",5);
    memcpy(buff2,"mad",5);
    ret = memcmp(buff1,buff2,5);
    if(ret>0){
        printf("buf1 is greater then buf 2\n");
    }
     else if(ret <0){
            printf("buff 1 is less then buf2");
        }
        else{
            printf("buf 1 is queal ti buf2");
        }
        return 0;
}