#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
struct my_thread{
    int thread_id;
    char msg[100];
};
void *PrintHello(void *threadobj){
    pthread_t thread_ID;
    struct my_thread *t1;
    t1= (struct my_pthread *) threadobj;
    thread_ID = pthread_self();
    printf("\n Thread Id: %u", thread_ID);
    printf("\n %d Thread Message : %s\n",t1->thread_id,t1->msg);
}
int main(){
    pthread_t th2,th3,th4,thread_ID;
    int rc;
    struct my_thread t2,t3,t4;
    t4.thread_id=4;
    strcpy(t4.msg,"I am Forth thread\n");
    t2.thread_id=2;
    strcpy(t2.msg,"I am Second thread\n");
    t3.thread_id=3;
    strcpy(t3.msg,"I am Third thread\n");

    thread_ID = pthread_self();
    printf("\n MAIN THREAD ID : %u", thread_ID);
    pthread_create(&th4,NULL,PrintHello,(void *)&t4);
    pthread_create(&th2,NULL,PrintHello,(void *)&t2);
    pthread_create(&th3,NULL,PrintHello,(void *)&t3);

    printf("\n Exit From main Thread\n");
    pthread_exit(NULL);
}