#include <stdio.h>
#include <math.h>
int main(int argc, const char *argv[])
{
	int n=100,sum=0,a,b,c;
	printf("三位水仙数有:");
	while(n>=100 && n<=999){
		a=n%10;
		b=((n%100)-a)/10;
		c=n/100;
		sum=(pow(a,3))+(pow(b,3))+(pow(c,3));
		if(n==sum){
			printf("%d\t",n);
		}
		n++;
	}
	puts("");
	return 0;
}
