#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>
int sharedvar=5;
sem_t my_sem;
void *thread_inc(void *arg){
    sem_wait(&my_sem);
    sharedvar++;
    sem_post(&my_sem);
    printf("after inct=%d\n",sharedvar);
}
void *thread_dec(void *arg){
    
    sem_wait(&my_sem);
    sharedvar--;
    sem_post(&my_sem);
    printf("after decr=%d\n",sharedvar);
}
int main(){
    pthread_t t1,t2;

    sem_init(&my_sem,0,1);
    pthread_create(&t1,NULL,thread_inc,NULL);
    pthread_create(&t2,NULL,thread_dec,NULL);
    

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    printf("sharedvar = %d\n",sharedvar);

    return 0;
}