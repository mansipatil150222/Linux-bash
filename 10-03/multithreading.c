#include<stdio.h>
#include<pthread.h>
pthread_t tid,tid2;
void* thread1(void *arg){
    printf("newly created thread 1\n");
    return NULL;
}
void* thread2(void *arg){
    printf("newly created thread 2\n");
    return NULL;
}
int main(void){
    int ret=pthread_create(&tid,NULL,thread1,NULL);
    if(ret)
        printf("thread is not created\n");
    else
        printf("thread is created\n");
        //getchar();

    
    int ret1=pthread_create(&tid2,NULL,thread2,NULL);
    if(ret1)
        printf("thread is not created\n");
    else{
        printf("thread is 2 created\n");
        getchar();
    }
        //pthread_join(tid,NULL);
        //pthread_join(tid2,NULL);

        //sleep(2);

    return 0;
}