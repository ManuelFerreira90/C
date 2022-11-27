#include <stdio.h>
#include "functions.h"

int main(){
    int v[]={1,6,2,90,0,34,12,25,5,2,1,0};
    int tam = sizeof(v)/sizeof(int);
    int vaux[tam],escolha;

    scanf("%d",&escolha);
    
    switch(escolha){
    		case 0:	bubblesort(v,tam);
    				break;
    		case 1:	insertionsort(v,tam);	
    				break;
    		case 2:	selectionsort(v,tam);
    				break;
    		case 3: heapsort(v,tam);	
    			    break;
    		case 4:	shellsort(v,tam);
    				break;
    		case 5:	quicksort(v,0,tam-1);
                    printf("quicksort:\n");
                    imprimir(v, tam);
    				break;
    		case 6:	mergesort(v,vaux,0,tam-1);
                    printf("mergesort:\n");
                    imprimir(v, tam);
    				break;
    		default: printf("Escolha invalida.\n");
    				break;
    }
    
    return 0;
}
