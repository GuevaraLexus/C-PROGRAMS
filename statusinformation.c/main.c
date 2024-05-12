#include <stdio.h>

int main()
{
    char firstName[20];
    char middleInitial[10];
    char lastName[20];
    double salary;
    int age;
    
    printf("Status Information\n");
    printf("Enter your Last Name :");
    scanf("%s", lastName);
    printf("Enter your First Name :");
    scanf("%s", firstName);
    printf("Enter your Middle Initial :");
    scanf("%s", middleInitial);
    printf("Input Age:");
    scanf("%d", &age);
    printf("Input your Salary:");
    scanf("%lf", &salary);
    
    printf("***********************");
    printf("\nYour name is %s, %s %s.", lastName, firstName, middleInitial);
    printf("\nYour age is %d", age);
    printf("\nYour salary is %f", salary);

    return 0;
}
