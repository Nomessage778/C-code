#include <stdio.h>
int main(int argc, const char *argv[])
{
	float a,b;char ch;
	printf("请输入需要计算的式子\n");
	scanf("%f %c %f",&a,&ch,&b);
	
	printf("%f%c%f\n",a,ch,b);
	if(ch == '+')
	{
		printf("%f%c%f = %f\n",a,ch,b,a+b);
	}

	if(ch == '-')
	{
		printf("%f%c%f = %f\n",a,ch,b,a-b);
	}
	if(ch == '*')
	{
		printf("%f%c%f = %f\n",a,ch,b,a*b);
	}
	if(ch == '/')
	{
		printf("%f%c%f = %f\n",a,ch,b,a/b);
	}
	return 0;
}
