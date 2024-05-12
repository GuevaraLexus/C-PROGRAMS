/*
#include <stdio.h>

int main()
{
    int a[5] = {80, 82, 84, 86, 88};
    
    printf("%d", a[2]); //calling the value from the array
    
    

    return 0;
}

#include <stdio.h>

int main()
{
    int test_score[5];
    int i, s, x;
    
    i = 0;
    do {
        printf("Enter test score : ");
        scanf("%d", &s);
        test_score[i] = s;
        i++;
    }
    while (i < 5);
    
    printf("Your test scores : ");
    for(x = 0; x < 5; x++){
        printf("%d", test_score[x]);
    }
    

    return 0;
}

#include <stdio.h>

int main()
{
    int test_score[10];
    int i, s, x = 0, total_score = 0;
    float avg = 0;
    int num_of_failed = 0, num_of_passed = 0;
    
    for (i = 0; i < 10; i++);
    {
        printf("Enter test %d score : ", i);
        scanf("%d", &i);
        test_score[i] = s;
        
        if (s >= 75){
            num_of_passed++;
        }
        else {
            num_of_failed++;
        }
        
        total_score = total_score += s;
    }
    avg = total_score / 10;
    
    printf("Total number of PASSED : %d\n", num_of_passed);
    printf("Total number of FAILED : %d\n", num_of_failed);
    printf("Total number of TOTAL SCORE : %d\n", total_score);
    printf("Total number of AVERAGE SCORE : %.2f\n", avg);

return 0;
}
*/

#include <stdio.h>

int main()
{
    int xy[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    
    for (i = 0; i <= 2; i++){
        printf("\n");
        for(j = 0; j <= 2; j++){
            printf("|%d|", xy[i][j]);
        }
    }
    //printf("\nArray element at xy[2][2] : %d", xy[0][2]);
    //printf("\n|1|2|3|\n|4|5|6|");
}
    