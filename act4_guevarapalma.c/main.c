#include <stdio.h>

int main()
{
    int firstnum = 0;
    printf("Input firstnum value             : ");
    scanf("%d", &firstnum);
    int secondnum = firstnum - 1; // ensuring that the sanity check below would fail if the user does not enter a valid number
    printf("Input secondnum value            : ");
    scanf("%d", &secondnum);

    // Sanity check
    if (firstnum > secondnum)
    {
        printf("Invalid Input!\n");
        return -1;
    }
    // Calculate and print the results
    int sum = 0;
    int even = 0;
    int sOdd = 0;
    for (int i = firstnum; i <= secondnum; i++)
    {
        sum += i;
        if (i % 2 == 0)
        {
            even += i;
        }
        else
        {
            sOdd += i * i;
        }
    }
    
    printf("Sum of all numbers               : %d\n", sum);
    printf("List of all Odd Numbers          : ");
    for (int i = firstnum % 2 == 1 ? firstnum : firstnum + 1; i <= secondnum; i += 2) // The iteration starts from firstnum, if it is odd, or from firstnum + 1, if it is even
        printf("%d ", i);
    printf("\nSum of all even numbers          : %d\n", even);
    printf("Sum of square of all odd numbers : %d\n", sOdd);
    
    return 0;
}
