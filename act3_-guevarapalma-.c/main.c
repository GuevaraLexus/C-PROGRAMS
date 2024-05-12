#include <stdio.h>

int main()
{
    int n, x = 0, i, y, a; // [((n * (n - 1)) + 1) ] +2 repeatedly until the value of n
    
    printf("Input integer value : "); 
    scanf("%d", &n);
    
    a = n;
    x = (n * (n - 1)) + 1;
    printf("%d ", x);//formula to get the first addend
    y = 2;
    
    
    //loop depende sa n
    x = x + y;
    printf("%d ", x);//since the first addend is an odd number, then by adding 2 to the first addend will result into another  odd addned
    x = x + y;
    printf("%d ", x);
    x = x + y;
    printf("%d ", x);
    x = x + y;
    printf("%d ", x);
    
    i = n * n * n;
    printf("\n%d", i);//basis for the cube
    
    while (x < a){
        x = x + y;
        printf("%d ", x);
    }












/*
        if (n >= 1 && n <= 30){
            while (n <= i){
                x + y;
                printf("%d\n", x);
                
            }
        }
        else {
            printf("The integer input is out of range");
        }

 
    if (n >= 1 && n <= 30){ //when the input is in range //2
        do {
            x = (n * (n - 1)) + 1;
            x += y; //the first addend will repeatedly add 2 to itself
        } 
        while (x < i);//I thought that this loop will help us to print the same count of the inputted number
            printf("%d\n", x);
        
        
    }
        
    else { //when the input is out of range
        printf("The integer input is out of range!");
    }
    */

    return 0;
}




