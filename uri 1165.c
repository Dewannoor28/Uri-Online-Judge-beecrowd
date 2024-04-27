
#include <stdio.h>

int main()
{
    int X,i,count=0;
    scanf("%d",&X);
    for(i=2; i<=100; i++)
    {
        if(X%i==0)
            count++;
            break;
    }
    if(count==0)
        printf( "%d eh primo\n",X);
    else
        printf("%d nao eh primo\n",X);

    return 0;
}
