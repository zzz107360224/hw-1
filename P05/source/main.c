#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int *apter;
	a = 7;
	apter = &a;

	printf("the address of a is %p \n the value of apter is %p", &a, apter);
	printf("\n\n the value of a is%d \n the value of *apter is %d ", a, *apter);
	printf("\n\n showing that * and & are complements of each other\n&*apter=%p \n *&apter=%p", &*apter, *&apter);
	system("pause");
	return 0;

}