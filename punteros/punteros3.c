#include <stdlib.h>
#include <stdio.h>

int main(){
    int n[5];

    for(int i=0; i<5; i++){
        printf("Insert num [%d]: ", i);
        scanf("%d", &n[i]);
        printf("\n");
    }

    printf("Vector: \n");
    for(int i=0; i<5; i++){
        printf("%d : %d\n", i, n[i]);
    }

    return 0;
}
