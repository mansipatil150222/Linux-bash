#include<stdio.h>
#include<string.h>

int main(){
    const char dest[]="oldstring";
    const char src[] = "newonestring";

    printf("Before memmove dest = %s, src = %s\n",dest,src);
    memmove(dest,src,9);
    printf("After memmove dest=%s, src=%s\n",dest,src);
    return 0;
}