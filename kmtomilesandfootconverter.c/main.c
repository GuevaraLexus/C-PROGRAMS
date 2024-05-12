#include <stdio.h>

int main()
{
    double distance;
    double miles;
    double foot;
    
    printf("Enter the distance (km) between two cities : ");
    scanf("%lf", &distance);
    
    miles = distance * 0.621371;
    foot = distance * 3280.84;
    
    //you can remove the ".2" before the "%" to see the whole decimal value.
    
    printf("The distance between two cities is %.2f km or %.2f miles or %.2f foot. ", distance, miles, foot);
    

    return 0;
}
