#include <stdio.h>

// Checks if `testToRun` equals `expected`
#define TEST(testToRun, expected)   \
    if ((testToRun) == (expected))  \
        printf(" <<< SUCCESS\n");   \
    else                            \
        printf(" <<< FAILURE\n")

// Calculates n ^ 3 based on addition and prints the addends
int Pow3(int n)
{
    if (n < 1 || n > 30)
    {
        printf("The integer input is out of range!");
        return -1;
    }

    //
    // Calculating the addends
    //
    int addends[n];
    int middle = (n - 1) / 2; // Start index of the addends
    addends[middle] = n % 2 == 0 ? n * n - 1 : n * n;
    for (int i = middle - 1; i >= 0; i--)
        addends[i] = addends[i + 1] - 2;
    for (int i = middle + 1; i < n; i++)
        addends[i] = addends[i - 1] + 2;
    
    //
    // Printing the addends and the sum
    //
    printf("Addends : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", addends[i]);
        if (i != n - 1)
            printf(" ");
    }
    
    int sum = 0;
    
    for (int i = 0; i < n; i++)
        sum += addends[i];
    printf("\nSum of Addends : %d", sum);

    return sum;
}

// Unit tests for Pow3()
void TestPow3()
{
    //
    // Testing all the positive test cases
    //
    for (int i = 1; i <= 30; i++)
        TEST(Pow3(i), i * i * i);

    //
    // Testing some negative test cases  
    //
    TEST(Pow3(0), -1);
    TEST(Pow3(31), -1);
}

int main()
{
    //TestPow3(); // Uncomment to run unit tests for Pow3()
    
    //
    // User input
    //
    int n = 0; // Initialize n so it will have an invalid value if scanf fails (e.g. not a number was entered)
    printf("Input integer value : ");
    scanf("%d", &n);

    return Pow3(n);
}
