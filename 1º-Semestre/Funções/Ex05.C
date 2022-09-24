//05
#include <stdio.h>
#include <stdlib.h>

int f(float); // Fahrenheit para Celsius
int ff2(float); // Fahrenheit para Kelvin
int c(float); // Celsius para Fahrenheit
int ce2(float); // Celsius para Kelvin
int kel(float); // Kelvin para Fahrenheit
int kelv1(float); // Kelvin para Celsius

int main(){
	float t,resultado;
	int i;
	printf("Digite a temperatura: ");
	scanf("%f",&t);
	printf("Digite 0 para Fahrenheit -> Celsius\n1 para Fahrenheit -> Kelvin\n2 para Celsius -> Fahrenheit\n3 para Celsius -> Kelvin\n4 para Kelvin -> Fahrenheit\n5 -> Kelvin -> Celsius\n");
	scanf("%d",&i);
	if(i==0){
		resultado=f(t);
	}
	else if(i==1){
		resultado=ff2(t);
	}
	else if(i==2){
		resultado=c(t);
	}
	else if(i==3){
		resultado=ce2(t);
	}
	else if(i==4){
		resultado=kel(t);
	}
	else if(i==5){
		resultado=kelv1(t);
	}
    printf("%f",resultado);
	return 0;
}
int f(float t){
	float celsius;
	celsius = (t - 32) * (1.8);
	return celsius;
}
int ff2(float t){
	float kelvin;
	kelvin = ((t - 32) * (1.8)) + 273;
	return kelvin;
}
int c(float t){
	float fahrenheit;
	fahrenheit = (t * (1.8)) + 32;
	return fahrenheit;
}
int ce2(float t){
	float kelvin;
	kelvin = t + 273;
	return kelvin;
}
int kel(float t){
	float fahrenheit;
	fahrenheit = ((t - 273)*(1.8)) + 32;
	return fahrenheit;
}
int kelv1(float t){
	float celsius;
	celsius = t - 273;
	return celsius;
}
