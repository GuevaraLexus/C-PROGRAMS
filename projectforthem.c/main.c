#include <stdio.h>

int main()
{
    char name[20];
    char address[50];
    char items[60];
    char answer;
    char pay[50];
    
    //questions
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Enter your specific address: ");
    fgets(address, 50, stdin);
    printf("Enter your items that you want to buy: ");
    fgets(items, 60, stdin);
    printf("Would you like to pay it after delivery? Enter Y if yes or N if no: ");
    scanf ("%c", &answer);
    
    //user interface
    printf("\nYour name is %s", name);
    printf("Your address is %s", address);
    printf("Your item/s is/are %s", items);
    printf("Your answer is %c\n", answer);
    
    // if and else statements for the type of payment
    if (answer == 'Y') 
    {
        printf("\nSuccess!");
    } else
    {
        printf("\nHow would you like to pay?");
        printf("\nPlease specify how would you like to pay: ");
        scanf("%s", pay);
        printf("\nYou will pay through %s.", pay);
    }
    printf("\nThank you!");

    return 0;
}


