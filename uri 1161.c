#include <stdio.h>

int main() {

    int a,b,i,fact1=1,fact2=1,sumaiya;
    scanf("%d%d",&a,&b);
    for(i=a;i>=1;i--)
    {
        fact1 =  fact1*i;
    }
   for(i=b;i>=1;i--)
    {
        fact2 =  fact2*i;
    }
  sumaiya = fact1+fact2;
  printf("%d",sumaiya);
    return 0;
}
