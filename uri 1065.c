
#include <stdio.h>
int main() {
   int n;
   int i,r=0;
   for(i=0;i<5;i++)
   {
      scanf("%d",&n);
      if(n%2==0)
      {
          r++;
      }
   }
   printf("%d valores positivos\n",r);
    return 0;
}
