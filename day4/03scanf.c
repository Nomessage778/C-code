#include <stdio.h>
int main(int argc, const char *argv[])
{
	char ch,ch1;int a,b;
	float fa,fb;
	char arrgy[100];
#if 0
	printf("请输入两个字符");
	scanf("%c%c",&ch,&ch1);
	printf("请输入两个数");
	scanf("%d %d",&a,&b);
	printf("请输入两个浮点数");
	scanf("%f %f",&fa,&fb);
	printf("请输入字符串");
	scanf("%s",arrgy);
#endif	
	printf("请输入字符串");
	scanf("%[^\n]",arrgy);
	printf("");
	scanf("");

	printf("ch = %c,ch1 = %c\n",ch,ch1);	
	printf("a = %d,b = %d\n",a,b);
	printf("fa = %f,fb = %f\n",fa,fb);
	printf("fa = %.2f,fb = %.2f\n",fa,fb);
	printf("arrgy = %s\n",arrgy);
	return 0;
}
