#include <stdio.h>

int main()
{
    int hours, minutes, seconds, totalSeconds;
    
    printf("Input total number of minutes : ");
    scanf("%d", &totalSeconds);
    
    hours = totalSeconds / 3600;
    minutes = totalSeconds % 3600 / 60;
    seconds = totalSeconds % 3600 % 60;
    
    printf("Time is %d : %d : %d", hours, minutes, seconds);

    return 0;
}
