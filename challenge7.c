#include <stdio.h>
int main(void)  {
    int m,b1,b2,b3,b4,b5,b6,b7; 

printf("enter un mantant :\n");
    scanf("%d", &m);

   b1 = m / 20;
   b2 = m % 20;
    printf("le nombre de billet de 20$ est : %d\n", b1);

    b3 = b2 / 10;
    b4 = b2 % 10;
    printf("le nombre de billet de 10$ est : %d\n", b3);

    b5 = b4 / 5;
    b6 = b4 % 5;
    printf("le nombre de billet de 5$ est : %d\n", b5);

    b7 = b6 / 1;
    printf("le nombre de billet de 1$ est : %d\n", b7);

    return 0;










}