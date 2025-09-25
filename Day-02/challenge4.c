#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int mounth, day, year, mounth1, day1, year1;

    printf("Enter the first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mounth, &day, &year);

    printf("Enter the second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mounth1, &day1, &year1);

    if (year < year1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", mounth, day, year, mounth1, day1, year1);
    else if (year > year1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", mounth1, day1, year1, mounth, day, year);
    else
    {
        if (mounth < mounth1)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", mounth, day, year, mounth1, day1, year1);
        else if (mounth > mounth1)
            printf("%d/%d/%d is earlier than %d/%d/%d\n", mounth1, day1, year1, mounth, day, year);
        else
        {
            if (day < day1)
                printf("%d/%d/%d is earlier than %d/%d/%d\n", mounth, day, year, mounth1, day1, year1);
            else if (day > day1)
                printf("%d/%d/%d is earlier than %d/%d/%d\n", mounth1, day1, year1, mounth, day, year);
            else
                printf("The two dates are the same.\n");
        }

        return 0;
    }
}