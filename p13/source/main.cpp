#include<stdio.h>
#include<stdlib.h>

void abc(int & n);
int main(void)
{
	int number = 5;
	printf("the original value of number is %d", number);
	abc(number);
	printf("\n the new value of number is %d\n", number);
	system("pause");


}
void abc(int &n)
{
	n = n * n*n;

}