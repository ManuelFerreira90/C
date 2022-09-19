//04
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char contrario(char);

int main(){
	char d[3],resultado[3];
	scanf("%s",&d);
	
	contrario(d);
	
	return 0;
}

char contrario(char b[3]){
	int i,c,r;
	c = strlen(b);
	for(i=c;i>=0;i--){
		r=b[i];
	}
	printf("%s",r);
}