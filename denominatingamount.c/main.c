#include <stdio.h>

int main()
{
    int amount, a, b, c, d, e, f, g;
    
    printf("Input Amount : ");
    scanf("%d", &amount);
    
    a = amount / 1000;
    b = (amount % 1000) / 500;
    c = ((amount % 1000) % 500) / 100;
    d = ((amount % 1000) % 100) / 50;
    e = ((amount % 1000) % 50) / 10;
    f = ((amount % 1000) % 10) / 5;
    g = (amount % 1000) % 5;
    
    printf("\n1000 = %d \n500 = %d \n100 = %d \n50 = %d \n10 = %d \n5 = %d \n1 = %d", a, b, c, d, e, f, g);
    
}
