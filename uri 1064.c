
#include <stdio.h>
int main() {
   float n,avarage,sum=0;
   int i,r=0;
   for(i=0;i<6;i++)
   {
      scanf("%f",&n);
      if(n>0)

      {
          r++;
          sum=sum+n;
      }
   }
   printf("%d valores positivos\n",r);
   avarage = (sum)/r;
   printf("%0.1f\n",avarage);
    return 0;
}
