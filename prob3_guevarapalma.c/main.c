#include <stdio.h>

int main()
{
    int start, end, cons;
    float bill;
    
    printf("Electricity Bill Calculator\n");
    printf("Input the Starting Reading : ");
    scanf("%d", &start);
    printf("Input the Ending Reading   : ");
    scanf("%d", &end);
    
    start < end;
    cons = end - start;
    printf("Total Consumption          : %d", cons);
    
    if( cons >= 1 && cons <= 100){
        bill = cons * 1.50;
    }
    else if(cons >= 101 && cons <= 300){
        bill = cons * 2.00;
    }
    else if(cons >= 301 && cons <= 500){
        bill = cons * 2.50;
    }
    else if(cons >= 501 && cons <= 1000){
        bill = cons * 3.25;
    }
    else if(cons >= 1001){
        bill = cons * 4.75;
    }
    else{
        printf("\n");
    }
    printf("\nElectricity Bill           : %.2f", bill);
    return 0;
}

