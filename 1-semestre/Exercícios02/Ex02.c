//Números espelhos
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n1=1,n2=1,memoria1,memoria2;
    int i,j,l=0;
    int u1,d1,c1,m1;
    int u2,d2,c2,m2;
    int v1[4],v2[4];
    
    while(n1!=0 && n2!=0){
        scanf("%d %d",&n1,&n2);
        //ordenar os dois números e comparar
        if(n1!=0 && n2!=0){
            m1=n1/1000;
            c1=(n1%1000)/100;
            d1=((n1%1000)%100)/10;
            u1=((n1%1000)%100)%10;
            v1[0]=u1;
            v1[1]=d1;
            v1[2]=c1;
            v1[3]=m1;
            m2=n2/1000;
            c2=n2%1000/100;
            d2=n2%1000%100/10;
            u2=n2%1000%100%10;
            v2[0]=u2;
            v2[1]=d2;
            v2[2]=c2;
            v2[3]=m2;
            for(i=0;i<4;i++){
                for(j=i;j<3;j++){
                    if(v1[i]>v1[j+1]){
                        memoria1=v1[i];
                        v1[i]=v1[j+1];
                        v1[j+1]=memoria1;
                    }
                    if(v2[i]>v2[j+1]){
                        memoria2=v2[i];
                        v2[i]=v2[j+1];
                        v2[j+1]=memoria2;
                    }
                }
            }
            for(i=0;i<4;i++){
                if(v1[i]!=v2[i])
                    l++;
            }
            if(l==0)
                printf("espelho\n");
            else
                printf("nao espelho\n");
            l=0;
        }
                
    }
    
    return 0;
}