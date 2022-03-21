#include<stdio.h>
#include<string.h>

int main(){
    const char str[] = "linuxlernal.com";
    const char ch = '#';

    printf("Starting before set/initialization is %s \n", str);
    memset(str, ch, strlen(str));
    printf("string after set is %s \n",str);
    return 0;
}