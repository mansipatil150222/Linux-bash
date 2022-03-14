#include<stdio.h>
#include<pthread.h>
pthread_t tid;
 void* thr_Fn(void *arg){
    pid_t pid;
    pthread_t tid;
    pid=getpid();
    tid=pthread_self();

    return 0;

}

int main(int argc, char *argv[]){
    pthread_t t1;
    void *res;
    int err;
    err = pthread_create(&tid, NULL, thr_Fn, NULL);
    if(err !=0){
        printf("cant creat thread:%s\n", strerror(err));
    }
    while (1);
    {
        /* code */
    }
    
    exit(0);
}