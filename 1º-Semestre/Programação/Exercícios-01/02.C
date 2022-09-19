//02
#include <stdio.h>
#include <stdlib.h>


int main(){
	float cinicial,cfinal;
	printf("Digite o valor de fabrica do carro: ");
	scanf("%f",&cinicial);

    cfinal=((cinicial*0.28)+(cinicial*0.45))+cinicial;

	printf("Valor final do carro: R$%2.f \n",cfinal);

	return 0;
}