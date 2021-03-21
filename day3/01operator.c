#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a =10;
	int b =0;
	int c =5;
	int d =9;//声明变量
	//b = ++a;//++是单目运算符，表示对a做加1运算，
	//此条命令执行中a的值更新为a+1；

	//b = a++;//++是单目运算符，表示对a做加1运算，
	//此条命令执行后a的值更新为a+1；



    //printf("a = %d,b = %d\n",a,b);//打印a,b的值；

	//b = --c;//--是单目运算符，表示对a做减1运算，
	//此条命令执行中a的值更新为a-1；
	//b = c--;//--是单目运算符，表示对a做减1运算，
	//此条命令执行后a的值更新为a-1；

	//printf("b = %d,c = %d\n",b,c);//打印b,c的值；
	


	printf("%d,%d,%d,%d,%d\n",+d,-d,d++,d--,--d);
	//打印计算结果


	return 0;
}
