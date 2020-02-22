#include<stdio.h>

int main()
{
	int num1, num2, sum, sub;
	printf("Enter the numbers: ");
	scanf("%d %d", &num1, &num2);
	sum=num1+num2;
	sub=num1-num2;
	printf("The sum of %d and %d is %d", num1, num2, sum);
	printf("The subtraction of % d and %d is %d", num1, num2, sub);
	return 0;
}
