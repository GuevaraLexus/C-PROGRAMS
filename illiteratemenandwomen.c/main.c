#include <stdio.h>

int main()
{
    int men, women, literatePeople, literateMen, literateWomen, illiterateMen, illiterateWomen, illiteratePeople;
    
    men = 80000 * 0.52;
    women = 80000 - men;
    literateMen = 80000 * 0.35;
    literatePeople = 80000 * 0.48;
    literateWomen = literatePeople - literateMen;
    illiteratePeople = 80000 - literatePeople;
    illiterateMen = men - literateMen;
    illiterateWomen = women - literateWomen;
    
    printf("Total of men in the town : %d", men);
    printf("\nTotal of literate people : %d", literatePeople);
    printf("\nTotal of literate men : %d", literateMen);
    printf("\nTotal of women : %d", women);
    printf("\nTotal of illiterate men is %d and women is %d. ", illiterateMen, illiterateWomen);
    

    return 0;
}