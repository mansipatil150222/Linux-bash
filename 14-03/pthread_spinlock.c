#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<sys/types.h>
#include<bits/types.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
static pthread_spinlock_t spinlock;
volatile int slock;
void *spinlockThread( void *i ){
    int rc;
    int count=0;
    printf("Entered thread %d getting spinlock \n",(int *)i);

    rc=pthread_spin_lock(&slock);

    printf("%d Thread unlock the spin lock\n",(int *)i);
    rc=pthread_spin_unlock(&slock);
    return NULL;
}

int main(){
    int rc=0;
    pthread_t t1,t;

if(pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE)!=0)
    perror("init");
    printf("Main, get spin lock\n");
    rc= pthread_spin_lock(&slock);

    printf("Main, creat the spin lock thread\n");
    rc=pthread_create(&t,NULL,spinlockThread, (int *)1);
    printf("Main wait a bir holding the spin lock\n");
    sleep(5);
    printf("Main, now unlock the spin lock");
    rc=pthread_spin_unlock(&slock);
    if(rc==0)
        printf("\n Main thread successfull unlocked.\n");
    else    
        printf("\n Main thread unsuccessfullyunlocked\n");
        printf("Maim, wait for the thread to end\n");
        rc=pthread_join(t, NULL);
        printf("Main completed.\n");

        pthread_exit(NULL);
        return 0;
}