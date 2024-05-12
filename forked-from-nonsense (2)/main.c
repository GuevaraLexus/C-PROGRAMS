#include <stdio.h>

int main()
{
    char name[25];
    int age, answer;
    
    printf("Hello! Please tell me your name : ");
    scanf("%s", name);
    printf("Please tell me your age : ");
    scanf("%d", &age);
    printf("Your age is %d.", age);
    
    age <= 18; 
    
    answer  = age <= 18? printf("\nYou can't play this game.") : printf("\nWelcome to League of Legends!");
    
    return 0;
}
