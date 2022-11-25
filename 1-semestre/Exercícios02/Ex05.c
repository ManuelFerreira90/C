//01
// Online C compiler to run C program online
#include <stdio.h>

int elpar(int *,int);
void ordenar(int *,int);

int main() {
    int i,v[5],tm=0,ntm;
    for(i=0;i<5;i++){
        scanf("%d",&v[i]);
        tm++;
    }
    ntm=elpar(v,tm);
    ordenar(v,ntm);
    for(i=0;i<ntm;i++){
        printf("%d ",v[i]);
    }
    return 0;
}
int elpar(int *vptr,int tm){
    int i,j,ntm=0,m;
    for(i=0;i<tm;i++){
        if(vptr[i]%2==0){
            vptr[i]=0;
        }
    }
    for(i=0;i<tm;i++){
        for(j=i;j<tm-1;j++){
            if(vptr[i]<vptr[j+1]){
                m=vptr[i];
                vptr[i]=vptr[j+1];
                vptr[j+1]=m;
            }
        }
    }
    for(i=0;i<tm;i++){
        if(vptr[i]>0){
            ntm++;
        }
    }
    return ntm;
}
void ordenar(int *vptr,int jtm){
    int i,j,m;
    for(i=0;i<jtm;i++){
        for(j=i;j<jtm-1;j++){
            if(vptr[i]>vptr[j+1]){
                m=vptr[i];
                vptr[i]=vptr[j+1];
                vptr[j+1]=m;
            }
        }
    }
}