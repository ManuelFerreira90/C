//1018
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    scanf("%d",&n);

    a=n;
    while (n>0){
      if(n>0){
        if(n>=100){
            n=n-100;
            n100++;
        }
        else if(n>=50){
            n=n-50;
            n50++;
        }
        else if(n>=20){
            n=n-20;
            n20++;
        }
        else if(n>=10){
            n=n-10;
            n10++;
        }
        else if(n>=5){
            n=n-5;
            n5++;
        }
        else if(n>=2){
            n=n-2;
            n2++;
        }
        else if(n>=1){
            n=n-1;
            n1++;
        }
      }
      else{
        break;
      }
    }
    printf("%d\n",a);
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}