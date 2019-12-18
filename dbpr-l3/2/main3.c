#include <stdio.h>
#include <pthread.h>

long int var = 0;
void* child_fn ( void* arg ) {
    for(;var<10000000;var++){
    }
    return NULL;
}

int main ( void ) {
    pthread_t child;
    pthread_create(&child, NULL, child_fn ,NULL);
    pthread_join(child, NULL);
    printf("var: %ld\n",var);
    return 0;
}
