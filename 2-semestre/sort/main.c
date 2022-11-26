#include <stdio.h>
#include "functions.h"

int main(){
    int v[]={1,6,2,90,0,34,12,25,5,2,1,0};
    int tam = sizeof(v)/sizeof(int);

    bubblesort(v,tam);
    insertionsort(v,tam);
    selectionsort(v,tam);
    heapsort(v,tam);
    
    return 0;
}
