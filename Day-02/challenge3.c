#include <stdio.h>
int main()
{
    int depart[] = {480, 583, 679, 767, 840, 945, 1020, 1305};
    int huere, minute, time;

    printf("enter a 24-hour time: ");
    scanf("%d", &depart);

    time = huere * 60 + minute;

    printf("Closest departure time is ");
    if (time <= 480 || time >= 1305)
        printf("8:00 a.m., arriving at 10:16 a.m.");
    else if (time <= 583)
        printf("9:43 a.m., arriving at 11:52 a.m.");
    else if (time <= 679)
        printf("11:19 a.m., arriving at 1:31 p.m.");
    else if (time <= 767)
        printf("12:47 p.m., arriving at 3:00 p.m.");
    else if (time <= 840)
        printf("2:00 p.m., arriving at 4:08 p.m.");
    else if (time <= 945)
        printf("3:45 p.m., arriving at 5:55 p.m.");
    else if (time <= 1020)
        printf("7:00 p.m., arriving at 9:20 p.m.");
    else
        printf("9:45 p.m., arriving at 11:58 p.m."); 
    return 0;
}