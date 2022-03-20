#include<stdio.h>
#include<string.h>

int main(){
    const char str[] = "linuxlernal.com";
    const char ch = '.';
    char *ret;

    printf("Starting before set/initialization is %s \n", str);
    ret = memchr(str, ch, strlen(str));
    printf("string after **%c** set is - **%s** \n",ch, ret-1);
    return 0;
}