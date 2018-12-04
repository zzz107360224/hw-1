#include<stdio.h>
#include<stdlib.h>

void abc(int *n);
int main(void)
{
	int a = 5;
	printf("the original value of number is %d", a);
	abc(&a);
	printf("\n the new value of number is %d \n", a);
	system("pause");


}
void abc(int *n)
{
	*n = *n**n**n;


}