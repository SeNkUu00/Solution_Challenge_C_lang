#include <stdio.h>

int main()
{

    int a, b;
    int reste;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    for (; b != 0;)
    {

        reste = a % b;

        a = b;
        b = reste;
    }

    printf("Le plus grand commun diviseur est : %d\n", a);

    return 0;
}