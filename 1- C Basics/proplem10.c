#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day,days,week,year;
    printf("Enter days:");
    scanf("%d",&day);
    year=day/365;
    week=(day%365)/7;
    days=(day%365)%7;
    printf("%d days = %d year/s, %d week/s and %d day/s",day,year,week,days);


    return 0;
}
