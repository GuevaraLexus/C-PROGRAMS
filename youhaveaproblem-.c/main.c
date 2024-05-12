#include <stdio.h>

int main()
{
    char y, n, x;
    
    printf("\tU okay?");
    printf("\n\n\tPress 'y' if yes or 'n' if no : ");
    scanf("%c", &x);
    
    if (x == 'y') 
    {
        printf("\n\tGood to know!");
        printf("\n\tBut if something bad happens, I'm always here :) ");
    } 
    else
    {
        printf("\n\tYou can talk to me if you want to.");
    }
    return 0;
}
