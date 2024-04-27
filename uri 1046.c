#include<stdio.h>
int main()
{
    int a,b,c;
    scanf ("%d%d",&a,&b);
    c = 24-a+b;
    if(a==b)
        printf("O JOGO DUROU %d HORA(S)\n",c);
    else if(a<=b)
        printf ("O JOGO DUROU %d HORA(S)\n",b-a);
    else
        printf("O JOGO DUROU %d HORA(S)\n",c);
    return 0;
}
