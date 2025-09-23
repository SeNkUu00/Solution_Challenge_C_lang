#include <stdio.h>
int main()
{
  float m;
  float n;
    printf("entrer un montant\n");
    scanf("%f", &m);
    n = m* (1 + 5.0/100.0);
    printf("le montant avec la taxe est %.2f\n", n);


    return 0;
}