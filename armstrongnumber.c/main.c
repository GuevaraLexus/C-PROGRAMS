#include <stdio.h>
int main() {
    int x, n, remainder, result = 0;
    
    printf("Enter a number (0 - 999) : ");
    scanf("%d", &x);
    n = x;

    while (n != 0) {
       
        remainder = n % 10;
        
       result += remainder * remainder * remainder;
        
       
       n /= 10;
    }

    if (result == x)
        printf("%d is an Armstrong number.", x);
    else
        printf("%d is not an Armstrong number.", x);

    return 0;
}