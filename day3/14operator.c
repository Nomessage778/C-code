#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a=3,b=5,c=2,d=1;
#if 0
	a = (a,b,c,d);
	printf("a = %d\n",a);
#endif
	// b=7    d=12     c=15
	a = (b=c+2*d+a,d=a+c+b,c=a+d+3/b);

	printf("a = %d,b = %d,c = %d,d = %d\n",
			a,b,c,d);

	return 0;
}
