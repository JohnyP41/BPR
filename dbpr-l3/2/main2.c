#include <stdio.h>
#include <pthread.h>

pthread_mutex_t count_mutex=PTHREAD_MUTEX_INITIALIZER;
long int var = 0;
void* child_fn ( void* arg ) {
    for(;var<100000000;){
pthread_mutex_lock(&count_mutex);
var++;
pthread_mutex_unlock(&count_mutex);
    }
    return NULL;
}

int main ( void ) {
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t1, NULL, child_fn ,NULL);
    pthread_create(&t2, NULL, child_fn,NULL);
	pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("var: %ld\n",var);
    return 0;
}
