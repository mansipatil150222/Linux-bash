#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
pthread_t tid;
 void* thr_Fn(void *arg){
    pid_t pid;
    pthread_t tid;
    pid=getpid();
    tid=pthread_self();
    printf("pid %u tid %u \n",(unsigned int)pid,(unsigned int)tid);
    return 0;

}

int main(void){
    int err;
    err = pthread_create(&tid, NULL, thr_Fn, NULL);
    if(err !=0){
        printf("cant creat thread:%s\n", strerror(err));
    }
    while (1);
    
    exit(0);
}