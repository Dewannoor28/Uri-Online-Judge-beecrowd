#include<stdio.h>
int main(){
    int X, Y, i;
    scanf("%d%d", &X,&Y);
    if (X > Y) {
         for (i = Y+2 ; i < X; i++) {
                if (i % 5 == 2 || i % 5 == 3) {
                    printf("%d\n", i);
                }
            }
    }else if(X < Y){
        for (i = X+2; i < Y; i++) {
                if (i % 5 == 2 || i % 5 == 3) {
                     printf("%d\n", i);
                }
            }
    }
}
