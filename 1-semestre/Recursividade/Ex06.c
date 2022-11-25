  //06
  // Online C compiler to run C program online
  #include <stdio.h>

  int fatorial(int);

  int main() {
      int n,resultado;
      scanf("%d",&n);
      resultado=fatorial(n);
      printf("%d",resultado);
      return 0;
  }
  int fatorial(int a){
      int t;
      if(a>=0){
          if(a==0){
              return 1;
          }
          else{
              t=a*fatorial(a-1);
          }
      }
      else{
          return -1;
      }
      return t;
  }