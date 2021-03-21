#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a = 10;

	int *p = &a;//在定义的时候*p表示指针，并不是取其中的值
	printf("a = %d\n",a);
	printf("*p = %d\n",*p);
	printf("&a = %p\n",&a);
	printf("&p = %p\n",&p);

	return 0;
}
