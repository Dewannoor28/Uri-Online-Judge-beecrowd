#include<stdio.h>
#define PI 3.14159
int main()
{
    float A,B,C;
    double tri,c,tra,s,r;
    scanf("%f%f%f",&A,&B,&C);
    tri = 0.5*A*C;
    c = PI*(C*C);
    tra = (((A+B)/2)*C);
    s = B*B;
    r = A*B;
    printf("TRIANGULO: %0.3lf\n",tri);
    printf("CIRCULO: %0.3lf\n",c);
    printf("TRAPEZIO: %0.3lf\n",tra);
    printf("QUADRADO: %0.3lf\n",s);
    printf("RETANGULO: %0.3lf\n",r);
    return 0;
}
