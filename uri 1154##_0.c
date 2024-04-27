
#include<stdio.h>

main()
{
	int n,i;
	float sum=0,div=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&n);
		if(n<0) break;
		sum+=n;
		div+=1;
     }
	float m = (sum/div);
	printf("%.2f\n",m);
}
