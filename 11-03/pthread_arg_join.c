#include<stdio.h>
#include<pthread.h>

static void* threadFunc(void *arg){
    char *s = (char *)arg;
    printf("%s\n",s);
    return 0;
}

int main(int argc, char *argv[]){
    pthread_t t1;
    void *res;
    int s;
    pthread_create(&t1, NULL, threadFunc, "Hello world");
    printf("Message from main()\n");
        sleep(3);

    exit(0);
}