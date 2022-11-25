//2450
#include <stdio.h>
#include <stdlib.h>

int main(){
    int z,l,c,i,j,p=0,tmv2=0,a,pos0=0,x=0,posi=0;
    scanf("%d %d",&l,&c);
    int m[l][c],vl[l-1],v2[c],k=0,posn=0,posi2=0;
    /*vl[l] contador de numeros linhas onde deve
    ter o numero 0 abaixo*/

    for(i=0;i<l;i++){
        p=0;
        for(j=0;j<c;j++){
            scanf("%d",&m[i][j]);
            if(l<l-1){
                if(p==0){
                    if(m[i][j]!=0){
                        vl[i]=i+1;
                        p++;
                }
            }
            }
        }
    }
    for(a=0;a<l;a++){
        for(i=0;i<c;i++){
                if(m[i][a]==0){
                    pos0=a;
                    posi=i;
                    printf("%d %d", pos0,posi);
                }
                printf("%d",posi+1);
                if(m[posi+1][pos0]!=0){
                    k++;
                }
                if(i==vl[a]){
                    if(m[a][i]!=0){
                        k++;
                    }
                }
            }
        x++;
    }
    if(k==0){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}