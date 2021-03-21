#include <stdio.h>
#if 1
#define M 10
//#define Max(a,b) a>b?a:b
#define S(n) #n
#define Name(a,b) a##b
#define Max(a,b) ({int max;if(a>b)max=a;else max=b;max;})
#define Wang "hello world"
#endif
int main(int argc, const char *argv[])
{
#if 1	
	int hello = 100;
	printf("%d\n",M);
	printf("%d\n",Max(12,15));
	printf("%s\n",S(857));
	printf("%s\n",Name(W,ang));
	printf("%d\n",Name(he,llo));
	printf("Max= %d\n",Max(100,200));
#endif	
	return 0;
}
