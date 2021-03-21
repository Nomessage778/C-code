#include <stdio.h>
int main(int argc, const char *argv[])
{
	char a = -123;
	char b = 123;//声明变量
		a = a>>5;//a整体向右平移5位
		b = b>>5;//b整体向右平移5位

	printf("a = %#x\n",a);//打印补码
	printf("b = %#x\n",b);//
	printf("b = %d\n",a);//打印值
	printf("b = %d\n",b);//
	return 0;
}
