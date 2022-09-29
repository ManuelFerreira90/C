//2786
#include <stdio.h>
#include <stdlib.h>

int main() {
    int l,c,t1,t2;
    scanf("%d %d",&l,&c);
    
    t1 = (c*l)+((c-1)*(l-1));
    t2 = ((c-1)*2)+((l-1)*2);
    
    printf("%d\n",t1);
    printf("%d\n",t2);
    
    return 0;
}