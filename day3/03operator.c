#include <stdio.h>
int main(int argc, const char *argv[])
{
	char a = -5;//声明变量a
	int b = 10;//声明变量b


	a = ~a;//对a取反
	b = ~b;//对b取反
	printf("a = %d\n",a);//打印a的值
	printf("a = %#x\n",a);//以十六进制打印a的补码
	printf("b = %#x\n",b);//以十六进制打印b的补码
	return 0;
}
