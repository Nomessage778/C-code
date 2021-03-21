#include <stdio.h>
int main(int argc, const char *argv[])
{
#if 0
	int a = 5,b = 10,c;
	//		c = b;
	//		b = a;
	//		a = c;

	//	printf("a = %d, b = %d\n",a,b);

	printf("a = %d\n",(0xf & b));
	printf("a = %d\n",(0x0 | b));
	printf("b = %d\n",(0xf & a)); 
	printf("b = %d\n",(0x0 | a));
#endif
	int	a=123,b=10;
	int c;

	c = a;
	a = b;
	b = c;//开辟临时变量

	printf("a = %d,b = %d\n",a,b);

	a = a+b;
	b = a-b;
	a = a-b;//使用 + - 运算符
	printf("a = %d,b = %d\n",a,b);

	a = a^b;
	b = a^b;
	a = a^b;//使用^异或
	printf("a = %d,b = %d\n",a,b);
	
	return 0;
}
