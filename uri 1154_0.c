#include <stdio.h>
int main()
{
    int n,i;
    float avg,sum=0,div;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            sum=sum+n;
            div=div+1;
            avg=sum/div;
            printf("%0.2f",avg);
        }
        else if(n<0)
            break;

    }
    return 0;
}
