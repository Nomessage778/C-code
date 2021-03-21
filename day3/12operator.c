#include <stdio.h>
int main(int argc, const char *argv[])
{
#if 0
	int a = 1;
	int b = 3;
	int c = 0;

	if(a>=0 && (c=b+100))
	{
		printf("a = %d\n",a);
		printf("c = %d\n",c);
	
	}
	printf("c = %d\n",c);
#else
	int a =1,b = 3,c = 0;

	if(a>=0 || (c = b+100))
	{
		printf("a = %d\n",a);
		printf("c = %d\n",c);
	
	}
	printf("c = %d\n",c);
#endif
	return 0;
}
