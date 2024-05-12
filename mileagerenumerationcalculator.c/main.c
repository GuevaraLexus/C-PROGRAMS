#include <stdio.h>

int main()
{
    double beginningOdometer, endingOdometer;
    double remuneration;
    double travel;
    
    printf("Enter beginning odometer reading : ");
    scanf("%lf", &beginningOdometer);
    printf("Enter ending odometer reading : ");
    scanf("%lf", &endingOdometer);
    
    travel = endingOdometer - beginningOdometer;
    remuneration = travel * 25;
    
    //you can erase the ".1" after the "%" so that you can see the whole decimal numbers ahead.
    
    printf("You traveled %.1f miles. At Rs.25 per mile, your remuneration is Rs.%.1f . ", travel, remuneration);
    return 0;
}
