#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a = 10;//声明变量


	printf("&a = %p\n",&a);//打印a的地址
	printf("a = %d,a = %d\n",a,*&a);//打印a的值，
	//*代表对地址读写操作，这里指读取a地址里的内容

	
	printf("a = %d,a = %d\n",*&a=100,a);
	//printf函数是由右向左执行，这里先读取a的内容，
	//再把100写入a中
	return 0;
}
