#include <stdio.h>
#include <pthread.h>

long int var = 0;
void* child_fn ( void* arg ) {
    for(;var<10000000;var++){
    }
    return NULL;
}

int main ( void ) {
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t1, NULL, child_fn,NULL);
    pthread_create(&t2, NULL, child_fn,NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("var: %ld\n",var);
    return 0;
}
