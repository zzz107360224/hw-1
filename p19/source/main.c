#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int b[] = { 10,20,30,40 };
	int *bptr = b;
	int i;
	
	printf("Array b printed with: \n Array subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("b[%d]=%d\n", i, b[i]);
	}
	printf("\nPoint/offset notation where\n"
		"the pointer is the array name\n");

	for (i = 0; i < 4; i++)
	{
		printf("*(b+%d)=%d\n", i, *(b + i));
	}
	printf("\nPointer subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("bptr[%d]=%d\n", i, bptr[i]);
	}
	printf("\nPoint/offset notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("*(bptr+%d)=%d\n", i, *(bptr + i));
	}

	system("pause");


}