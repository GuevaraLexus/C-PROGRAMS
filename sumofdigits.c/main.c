#include <stdio.h>

int main()
{
    int n, sum = 0, a, b, c, d, e;
    
    printf("Enter your Number : ");
    scanf("%d", &n);
    
    a = n / 10000;
    b = (n % 10000) / 1000;
    c = ((n % 10000) % 1000) / 100;
    d = (((n % 10000) % 1000) % 100) / 10;
    e = (((n % 10000) % 1000) % 100) % 10;
    
    sum = a + b + c + d + e;
    
    printf("The Sum of digits %d is %d.", n, sum);
    
    return 0;
}