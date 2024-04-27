#include <stdio.h>
#define PI 3.14159
int main()

{
    float R;
    double VOLUME;
    scanf("%f",&R);
    VOLUME = ((4.0/3)*PI*R*R*R);
    printf("VOLUME = %0.3f\n",VOLUME);
    return 0;
}
