#include<stdio.h>
#include<unistd.h>
int main(){
    printf("statement\n");
    fork();
    fork();
    fork();
    printf("statement2\n");
    printf("statement3\n");
    while (1);
   
    return 0;
}
