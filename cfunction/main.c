#include <stdio.h>
#include <stdlib.h>

int calculate(int op, int num1, int num2) {
	int result = 0;
	
	if (op == 1)
		result = num1 + num2; 	
	else if (op == 2)
		result = num1 - num2; 
	else if (op == 3)
		result = num1 / num2; 
	else if (op == 3)
		result = num1 * num2;
	
	return result;
	
}
int main() {
	int n1, n2;
	int opt;
	printf("Arithmetic Operators\n");
	printf("\nChoose an Operator (pick the number only) : ");
	printf("\n1. +\t2. -\t3. /\t4. *\n");
	scanf("%d", &opt);
	printf("Input num1 value : ");
	scanf("%d", &n1);
	printf("Input num2 value : ");
	scanf("%d", &n2);
	
	printf("Result is %d\n", calculate(opt, n1, n2 ));

	return 0;
}