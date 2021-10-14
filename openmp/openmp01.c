#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("openmp ejecuntando con: %d hilos\n", omp_get_max_threads());
#pragma omp parallel
    {
        printf("Hola mundo desde el hilo %d\n", omp_get_thread_num());
    }

    return 0;
}

