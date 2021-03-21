#include <stdio.h>
#include <math.h>
int main(int argc, const char *argv[])
{
	int a,b,c;double s, area;
	printf("请输入三角形的边长\n");
	scanf("%d%d%d",&a,&b,&c);
	getchar();

	if(((a+b)>c && abs(a-b)<c) || ((a+c)>b && abs(a-c)<b) || 
			((c+b)>a && abs(c-b)<a)){
		s = (a+b+c)/2.0;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("三角形的面积 = %.2f\n",area);
	}else{
		printf("输入错误，请重试！\n");
	}

	return 0;
}
