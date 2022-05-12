#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./src/h/item.h"

extern void sort(Item* a, int lo, int hi);

int main(int argc, char** argv) {
    
    clock_t start, end;
    double cpu_time_used;
    
    int N = 0;
    printf("Insira o numero N de items a serem ordenados: ");
    scanf("%d", &N);

    Item* arr = malloc(N * sizeof(Item));

    printf("Insira os N numeros:\n");
    for(int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    start = clock();

    sort(arr, 0, N - 1);

    for(int i = 0; i < N; i++)
        (i == N - 1) ? printf("%d\n", arr[i]) : printf("%d, ", arr[i]);

    end = clock();
    cpu_time_used = ((double) (end - start))/CLOCKS_PER_SEC;
    printf("Tempo decorrido: %.2f\n", cpu_time_used);

    free(arr);

    return 0;
}