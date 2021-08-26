#include <stdio.h>

void printNum(int *puntero){
    printf("%d\n", *puntero);
}

void printChar(char *puntero){
    printf("%c\n", *puntero);
}

void print(void *puntero, char tipo){
    switch(tipo){
        case 'i': printf("%d\n", *((int *) puntero)); break;
        case 'c': printf("%c\n", *((char *) puntero)); break; 
    }
}

int main(){
    int n = 5;
    printNum(&n);

    char letra = 'a';
    printChar(&letra);


    print(&n, 'i');
    print(&letra, 'c');


    return 0;
}


