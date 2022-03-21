#include<stdio.h>
#include<unistd.h>

int main(){
    printf("going to executr an LS program\n");

    execl("/bin/ls","ls","-lh",0);

    printf("i executed ls program");
    printf("i executed ls program");
    printf("i executed ls program");

    return 0;
    
    }