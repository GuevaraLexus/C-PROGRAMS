#include <stdio.h>

int main(){
    
   int a = 10, b = 20;
   int sum = 0, quotient = 0, product = 0, difference = 0;
   
   sum = a + b;
   difference = a - b;
   product = a * b;
   quotient = a / b;
   
   printf("The sum of %d and %d is equal to %d \n", a, b, sum);
   printf("The difference of %d and %d is equal to %d \n", a, b, difference);
   printf("The product of %d and %d is equal to %d \n", a, b, product);
   printf("The quotient of %d and %d is equal to %d \n", a, b, quotient);

    return 0;
}