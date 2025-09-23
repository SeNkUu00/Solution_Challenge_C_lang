#include <stdio.h>
int main()
{
    double r;
    float v;
    float pi = 3.14;

    printf("entrer le rayon\n");
    scanf("%f", &r);
    v = (4.0f / 3.0f) * pi * (r * r * r);
    printf("Le Volume d'une sphère est  %.2f\n", v);

    return 0;
}