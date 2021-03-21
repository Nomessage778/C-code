#include <stdio.h>
#define M 10
#define MAX(a,b) a>b?a:b//条件运算符，作用求最大值
int main(int argc, const char *argv[])
{
	int a,b=2,c=3,d;
	printf("M = %d\n",M);
	printf("MAX(100,200) = %d\n",MAX(100,200));

	a = b>c?(d=b+c*M):(d=M*b+b*c);

	printf("a = %d,d = %d\n",a,d);

	return 0;
}
