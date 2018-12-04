#include <stdio.h>
#include <stdlib.h>

int abc(int n);
int main(void)
{
	int number = 5;
	printf("the original value of number is %d", number);
	number = abc(number);
	printf("\nthe new value of number is %d\n",number);
	system("pause");
	return 0;
}
int abc(int n)
{
	return n * n*n;
}