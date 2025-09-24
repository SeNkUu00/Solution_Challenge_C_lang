#include <stdio.h>
int main()
{

    char number[2];

    printf("enter deux chiifers :");
    scanf("%s", number);
    printf("Le nombre inversé est :%c%c", number[1], number[0]);

    return 0;
}