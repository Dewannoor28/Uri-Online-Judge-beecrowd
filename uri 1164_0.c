#include<stdio.h>
int main()
{
    int i,j,X,k,N;

    scanf("%d",&N);
    for(j=0;j<N;j++){
    scanf("%d",&X);
     k=0;
    for(i=1;i<X;i++){
    if(X%i==0)
       k=k+i;
    }

     if(X==k){
      printf("%d eh perfeito\n",X);
      }
      else{
         printf("%d nao eh perfeito\n",X);
      }
    }
    return 0;
}
