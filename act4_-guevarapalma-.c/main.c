#include <stdio.h>

int main()
{
    int firstnum, secondnum, x, sum = 0, even = 0, sOdd = 0, list = 0;
    
    printf("Input firstnum value          : ");
    scanf("%d", &firstnum);
    printf("Input secondnum value         : ");
    scanf("%d", &secondnum);
    
    while (x = 0);
        if (firstnum < secondnum){
            x = 0;
        }
        else{
            printf("Invalid Input!\n");
        }
        {
        while (firstnum <= secondnum){
            sum = sum + firstnum;
                if(firstnum % 2 == 0){
                    even = even + firstnum;
                }
                if(firstnum % 2 != 0){
                    sOdd = sOdd + ((firstnum * secondnum) - sum);
                }
                firstnum++;
        }
            printf("Sum of all numbers            : %d\n", sum);
            {
            printf("List of all Odd Numbers       : ");
                for (firstnum = 10; firstnum <= secondnum; firstnum++){
                    if (firstnum % 2 != 0){
                        printf("%d ", firstnum);
                    }
                }
            printf("\nSum of all even numbers       : %d", even);
            printf("\nSum of square all odd numbers : %d", sOdd);
            }
        }
    return 0;
}
