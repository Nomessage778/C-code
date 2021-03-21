#include <stdio.h>

void swap(int *a,int *b)
{

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, const char *argv[])
{
	int a = 5;
	int b = 10;

	printf("交换前 a = %d,b = %d\n",a,b);
	swap(&a,&b);
	printf("交换后 a = %d,b = %d\n",a,b);

	return 0;
}
