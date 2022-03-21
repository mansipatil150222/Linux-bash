#include<pthread.h>
#include<stdio.h>

void *my(void *i){
    printf("\n I am in %d Thread \n",(int *)i);
}
main(){
    pthread_t tid;
    struct sched_param param;
    int priority,policy,ret;
    ret=pthread_getschedparam (pthread_self(), &policy, &param);
    if(ret !=0)
        perror("getschedparam");
    printf("\n----------------------------Main Thread-------------\n Policy: %d \tPriority: %d\n",policy,param.sched_priority);
    policy = SCHED_FIFO;
    param.sched_priority=3;
    ret = pthread_setschedparam(pthread_self(),policy,&param);
    if(ret != 0)
        perror("getschedparam");
    ret=pthread_getschedparam(pthread_self(), &policy, &param);
    if(ret !=0)
        perror("getschedparam");
    printf("\n----------------------------Main Thread-------------\n Policy: %d \tPriority: %d\n",policy,param.sched_priority);
}