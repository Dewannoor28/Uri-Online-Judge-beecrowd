#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,D,X,Y;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A ==0 )
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    D = B*B - 4*A*C;
    if(D>=0)
    {
        X = (-B + sqrt(D))/(2*A);
        Y = (-B - sqrt(D))/(2*A);
        printf("R1 = %.5f\n",X);
        printf("R2 = %.5f\n",Y);
    }
    else
        printf("Impossivel calcular\n");
        return 0;
}
