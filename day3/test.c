#include <stdio.h>
int main(int argc, const char *argv[])
{
#if 0
	int a,b,c,d,e;
	int t = 1234;
		a = t%10;
		b = t%100;
		c = t%1000;
		d = b-a;
		e = c-b;
	
	printf("%d\n",a);
	printf("%d\n",d/10);
	printf("%d\n",e/100);
	printf("%d\n",t/1000);
#endif
	char a;
	a = 128;

	printf("a = %c\n",a);

	return 0;
}
