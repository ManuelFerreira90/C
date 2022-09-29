//Barragem
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // p=pessoas , t=tempo
    int p,t,total=0;
    int n1=0,x=0;
    scanf("%d %d",&p,&t);
    
    while (n1!=-1){
        x++;
        scanf("%d",&n1);
        if(n1!=-1){
            if(x<=t){
                total+=n1;
            }
        }
    }
    if(total==p){
        printf("Todos a salvo");
    }
    else{
        printf("Apenas %d pessoas a salvo",total);
    }
    
    return 0;
}