#include <stdio.h>

int main()
{
    char name[20];
    char address[50];
    char items[60];
    
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    printf("Enter your specific address: ");
    fgets(address, 50, stdin);
    printf("Your address is %s", address);
    printf("Enter your items that you want to buy: ");
    fgets(items, 60, stdin);
    printf("Your items is/are %s", items);
    

    return 0;
}
