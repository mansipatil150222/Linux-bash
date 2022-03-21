#include<stdio.h>
#include<string.h>
void my_mem_copy(char *src, char *dest, int n){
    int i;
    for(i=0;i<n;i++){
        *dest = *src;
        dest++;
        src++;
    }
}
int main(){
    const char dest[9]=NULL;
    const char src[9] = "oldstring";
    
    printf("Before copy\n");
    printf("src= %s\ndest= %s\n",src,dest);
    printf("After Copy\n");
    my_mem_copy(src, dest, 9);
    printf("%s",dest);
    return 0;
}