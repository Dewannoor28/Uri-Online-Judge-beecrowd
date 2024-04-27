#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, h,m;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    h = h2 - h1;
    if (h < 0)
    {
        h = 24 + (h2 - h1);
    }
    m = m2 - m1;
    if (m < 0)
    {
        m = 60 + (m2 - m1);
        h--;
    }
    if (h2 == h1 && m2 == m1)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}
