#include<stdio.h>
int main()

{
    char name[28];
    double sallary,sold_tk,Total_sallary;
    scanf("%s%lf%lf",&name,&sallary,&sold_tk);
    Total_sallary = sallary+((sold_tk*15)/100);
    printf("TOTAL = R$ %0.2lf\n",Total_sallary);
    return 0;
}
