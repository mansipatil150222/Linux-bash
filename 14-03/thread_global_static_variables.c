#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int sharedvar=5;
void *thread_inc(void *arg){
    sharedvar++;
    printf("after inct=%d\n",sharedvar);
}
void *thread_dec(void *arg){
    sharedvar--;
    printf("after decr=%d\n",sharedvar);
}
int main(){
    pthread_t t1,t2;
    pthread_create(&t1,NULL,thread_inc,NULL);
    pthread_create(&t2,NULL,thread_dec,NULL);
    

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    printf("sharedvar = %d\n",sharedvar);
}