//12
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int troco(float);

int main(){
    float resultado;
	float b;
	printf("Valor da compra igual a 2, Digite quando voce ira pagar para calcular o troco\n");
    scanf("%f",&b);
    
    b=b-2;
    resultado = troco(b);
    
	printf("Valor do troco = %2.f",resultado);

    return 0;
}
int troco(float a){
	float moedas=0;
	while (a!=0){
		if (a!=0){
			if(a>=0.50){
				a=a-0.50;
				moedas+=0.50;
			}
			else if(a<50 && a>=0.20){
				a=a-0.20;
				moedas+=0.20;
			}
			else if(a<50 && a<0.20 && a>=0.10){
				a=a-0.10;
				moedas+=0.10;
			}
			else if(a<50 && a<0.20 && a<0.10 && a>=0.5){
				a=a-0.05;
				moedas+=0.05;
			}
			else if(a<50 && a<0.20 && a<0.10 && a<0.5 && a>=0.2){
				a=a-0.02;
				moedas+=0.02;
			}
			else if(a<50 && a<0.20 && a<0.10 && a<0.5 && a<0.2){
				a=a-0.01;
				moedas+=0.01;
			}
		}
    }
	return moedas;
}