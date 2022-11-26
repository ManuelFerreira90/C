
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//imprimir elementos
void imprimir(int *v,int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

//bubbler sort
void bubblesort (int *v,int tam){
    int i,j,aux;
    for(i=0;i<tam;i++){
        for(j=i+1;j<tam;j++){
            if(v[i]>v[j]){
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }
    printf("bubblesort:\n");
    imprimir(v, tam);
    return;
}

//insertion sort
void insertionsort(int *v,int tam){
    int i,j,aux;
    for(i=1;i<tam;i++){
        aux=v[i];
        j=i-1;
        while(j>=0 && v[j]>aux){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=aux;
    }

    printf("insertionsort:\n");
    imprimir(v, tam);
    
    return;
}

//selection sort
void selectionsort(int *v, int tam){
    int i,j,menor,aux;
    for(i=0;i<tam;i++){
        menor=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[menor]) menor=j;
        }
        aux=v[menor];
        v[menor]=v[i];
        v[i]=aux;
    }

    printf("selectionsort:\n");
    imprimir(v, tam);
    
    return;
}

//heap sort
void metodoheap(int *v,int tam, int i){
    int raiz = i, esquerda = (2*i)+1, direita = (2*i)+2,aux;
    if(esquerda < tam && v[esquerda] > v[raiz]) raiz = esquerda;
    if(direita < tam && v[direita] > v[raiz]) raiz = direita;
    if(raiz!=i){
        aux=v[i];
        v[i]=v[raiz];
        v[raiz]=aux;
        metodoheap(v,tam,raiz);
    }
}

void heapsort(int *v, int tam){
    int i,j,aux;
    for(i=tam/2-1;i>=0;i--){
        metodoheap(v,tam,i);
    }
    for(j=tam-1;j>0;j--){
        aux = v[0];
        v[0] = v[j];
        v[j] = aux;
        metodoheap(v,j,0);
    }

    printf("heapsort:\n");
    imprimir(v, tam);

    return;
}