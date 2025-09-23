#include <stdio.h>
int main()
{
    int r = 10;
    float v;
    float pi = 3.14;

    v = (4.0f / 3.0f) * pi * (r * r * r);
    printf("Volume of the sphere is %.2f\n", v);

    return 0;
}