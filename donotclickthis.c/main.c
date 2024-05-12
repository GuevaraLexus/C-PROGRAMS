#include <stdio.h>

int main()
{
    char name[30];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\nHello %s,I love you.", name);
    printf("\nWe know you are doing great!\nWe hope that you are fine.\nIf something bad happens, then you can talk to me whenever you want.");
    printf("\n\nYou are loved,%s.\nNo matter how hard your past is,\nYou are at the present, and let your present define your future.", name);
    
    return 0;
}


