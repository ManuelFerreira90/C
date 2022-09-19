//04
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x;
	scanf("%f",&x);

	if(x>=0){
        x=sqrt(x);
	}
	else{
        x=pow(x,2);
	}
	printf("%2.f",x);

	return 0;
}