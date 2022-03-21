#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
void *PrintHEllo(void *threadif){
    printf("\nHello World\n");
    while(1);
}
int main(){
    pthread_t thread;
    int re, t=0;
    printf("Create thread \n");
    re = pthread_create(&thread, NULL, PrintHEllo, NULL);
    printf("\n Thread ID : %lu",thread);
    sleep(6);
    t=pthread_cancel(thread);
    if(t==0)
        printf("\n cancled thread\n");
    printf("\n Thread ID : %lu\n",thread);
    
}