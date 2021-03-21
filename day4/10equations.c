#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int a,b,c;double d,x1,x2;
	printf("请输入a、b、c的值\n");
	scanf("%d%d%d",&a,&b,&c);
	getchar();
	printf("%d%d%d\n",a,b,c);
	d = b*b-4*a*c;
	printf("%.2f\n",d);
	if(d>0){
		x1 = (-b+sqrt(d))/2*a;
		x2 = (-b-sqrt(d))/2*a;
		printf("x1 = %.2f,x2 = %.2f\n",x1,x2);
	}else{
		printf("输入错误，请重试！\n");
	}
	
//	printf("x1 = %.2f,x2 = %.2f\n",x1,x2);
	return 0;
}
