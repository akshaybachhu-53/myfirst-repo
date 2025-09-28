#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* foo(void* args){
    int id = *((int*)args);
    printf("Hello Akshay this is your ID: %d\n", id);
    return NULL;
}
int main(){
    pthread_t thread1;
    int id = 53;
    pthread_create(&thread1, NULL, foo, &id);
    //pthread_join(thread1, NULL);
pthread_detach(thread1);
sleep(3);
    return 0;
}