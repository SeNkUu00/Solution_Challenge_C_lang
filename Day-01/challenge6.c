#include <stdio.h>
int main(void)
{
    float x;
    float y;
    printf("donner une valeur de x :\n");
    scanf("%f", &x);

    y = (((3 * (x + 2)) * (x - 5) * (x - 1) * (x + 7) * (x - 6)));

    printf("le resultat est : %.2f\n", y);

    return 0;
}