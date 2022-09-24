//08
#include <stdio.h>
#include <stdlib.h>

int converte(int);

int main(){
    int resultado;
	int b;
    scanf("%d",&b);
    
    resultado = converte(b);

    return 0;
}
int converte(int a){
    float pes,polegadas;
    polegadas = a * 39.37;
    pes = polegadas / 12;
    printf("Medida em pes: %f\n",pes);
    printf("Medida em polegadas: %f\n",polegadas);
    return 0;
}