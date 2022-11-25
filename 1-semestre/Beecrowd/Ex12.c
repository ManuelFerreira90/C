#include <stdio.h>

int main() {
    char s[100];
    int i,f=0,t=0;
    scanf("%s",s);
    for(i=0;i<100;i++){
        if(s[i]=='1'){
            f+=1;
        }
    }
 
    if(f%2!=0){
        printf("%s1\n",s);
    }
    else{
        printf("%s0\n",s);
    }
    return 0;
}