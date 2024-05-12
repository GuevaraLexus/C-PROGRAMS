/*
#include <stdio.h>

int main()
{
    int num, binary, a, b, c, d, e, f, g, h, i, j;
    printf("insert binary : ");
    scanf("%d", &binary);
    
    a = binary / 1000000000;
        num = a * 512;
    b = binary % 1000000000;
        b = b / 100000000;
        num = num + b * 256;
    c = binary % 100000000;
        c = c / 10000000;
        num = num + c * 128;
    d = binary % 10000000;
        d = d / 1000000;
        num = num + d * 64;
    e = binary % 1000000;
        e = e / 100000;
        num = num + e * 32;
    f = binary % 100000;
        f = f / 10000;
        num = num + f * 16;
    g = binary % 10000;
        g = g / 1000;
        num = num + g * 8;
    h = binary % 1000;
        h = h / 100;
        num = num + h * 4;
    i = binary % 100;
        i = i / 10;
        num = num + i * 2;
    j = binary % 10;
        j = j / 1;
        num = num + j;
    
    printf("%d", num);
    

    return 0;
}


int main()
{
    int num1,num2, num3, binary, a, b, c, d, e, f, g, h, i, j;
    printf("insert binary : ");
    scanf("%d", &binary);
    
    a = binary / 1000000000;
        num1 = a * 512;
    b = binary % 1000000000;
        b = b / 100000000;
        num2 = num2 + b * 256;
    c = binary % 100000000;
        c = c / 10000000;
        num3 = num3 + c * 128;
    d = binary % 10000000;
        d = d / 1000000;
        num1 = num1 + d * 64;
    e = binary % 1000000;
        e = e / 100000;
        num2 = num2 + e * 32;
    f = binary % 100000;
        f = f / 10000;
        num3 = num3 + f * 16;
    g = binary % 10000;
        g = g / 1000;
        num1 = num1 + g * 8;
    h = binary % 1000;
        h = h / 100;
        num2 = num2 + h * 4;
    i = binary % 100;
        i = i / 10;
        num3 = num3+ i * 2;
    j = binary % 10;
        j = j / 1;
        num1 = num1 + j;
        
    printf("%d%d%d", num1, num3, num2);
        
    return 0;
    
}

*/
////////////////////////////////////////////////////////////////    

#include <stdio.h>

int main()
{
    int num, binary, a, b, c, d, e, f, g, h, i, j;
    int num1, num2, num3, num4, a1, b1, c1, d1, e1, f1, g1, h1, i1, j1;
    printf("insert binary : ");
    scanf("%d", &binary);
    
    //BASE 2 TO BASE 10
    a = binary / 1000000000;
        num = a * 512;
    b = binary % 1000000000;
        b = b / 100000000;
        num = num + b * 256;
    c = binary % 100000000;
        c = c / 10000000;
        num = num + c * 128;
    d = binary % 10000000;
        d = d / 1000000;
        num = num + d * 64;
    e = binary % 1000000;
        e = e / 100000;
        num = num + e * 32;
    f = binary % 100000;
        f = f / 10000;
        num = num + f * 16;
    g = binary % 10000;
        g = g / 1000;
        num = num + g * 8;
    h = binary % 1000;
        h = h / 100;
        num = num + h * 4;
    i = binary % 100;
        i = i / 10;
        num = num + i * 2;
    j = binary % 10;
        j = j / 1;
        num = num + j;
    
    printf("Base 10 : %d", num);
    
    //BASE 2 TO BASE 8
    //Thousands Digit
    a1 = binary % 10000000000;
        a1 = a1 / 1000000000;
        
    //Hundreds Digit
    b1 = binary % 1000000000;
        b1 = b1 / 100000000;
        b1 = b1 * 4;
    
    c1 = binary % 100000000;
        c1 = c1 / 10000000;
        c1 = c1 * 2;
    
    d1 = binary % 10000000;
        d1 = d1 / 1000000;
        
    //Tens Digit
    e1 = binary % 1000000;
        e1 = e1 / 100000;
        e1 = e1 * 4;
        
    f1 = binary % 100000;
        f1 = f1 / 10000;
        f1 = f1 * 2;
    
    g1 = binary % 10000;
        g1 = g1 / 1000;
    
    //Ones Digit
    h1 = binary % 1000;
        h1 = h1 / 100;
        h1 = h1 * 4;
    
    i1 = binary % 100;
        i1 = i1 / 10;
        i1 = i1 * 2;
    
    j1 = binary % 10;
        
        num4 = a1;
        num3 = b1 + c1 + d1;
        num2 = e1 + f1 + g1;
        num1 = h1 + i1 + j1;
        
    printf("\nBase 8 : %d%d%d%d", num4, num3, num2, num1);
        
    return 0;
    
}


