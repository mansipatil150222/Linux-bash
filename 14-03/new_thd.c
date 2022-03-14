#include<stdio.h>
#include<pthread.h>
void * process(void *arg){
    pthread_detach(pthread_self());
    printf("Sleeping 2 sec\n");
    sleep(2);
    printf("slept 2 sec\n");
}

int main(void){
    pthread_t t_id;
    int errno = pthread_create(&t_id,NULL,process,NULL);
    pthread_exit(NULL);
}