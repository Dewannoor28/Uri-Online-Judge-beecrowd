#include <stdio.h>

int main()
{

    int year;
    scanf("%d",&year);

    {
        if(year%4 == 0 && year%400 == 0)
            printf("This is leap year.\n");
        //if((year % 15)==0)
            //printf("This is huluculu festival year.\n");
         if((year%55)==0)
            printf("This is bulukulu festival year.\n");
       if((year%15)==0)
            printf("This is huluculu festival year.\n");
       else if ((year%100!=0))
            printf("This is an ordinary year.\n");

    }

    return 0;
}
