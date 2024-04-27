
#include <stdio.h>

int main() {

    int A,NUMBER;
    double B,C, SALARY;
    scanf("%d%lf%lf",&A,&B,&C);
    NUMBER = A;
    SALARY = B*C;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %0.2lf",SALARY);

    return 0;
}
