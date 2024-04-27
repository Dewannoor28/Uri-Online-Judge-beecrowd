
#include <stdio.h>
int main()
{
   int i,n,j=0,h=0;
    for(i=1;i<=100;i++)
   {
      scanf("%d",&n);
      if(h<n)
   {
    h=n;
    j=i;
   }
   }
   printf("%d\n",h);
   printf("%d\n",j);
   return 0;
}
