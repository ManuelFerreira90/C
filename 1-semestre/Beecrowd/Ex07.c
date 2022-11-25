//1019
#include <stdio.h>
#include <stdlib.h>

int main(){
    int t,h=0,m=0,s=0;
    scanf("%d",&t);

    if(t>=3600){
        h=t/3600;
        m=(t%3600)/60;
        s=(t%3600)%60;
    }
    else if(t>=60 && t<3600){
        m=t/60;
        s=t%60;
    }
    else if(t<60){
        s=t;
    }
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}