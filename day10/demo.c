#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a;
	int x,y;
	int add,sub,mul,div;
	while(1){
		printf("请选择您要进行的运算\n");
		printf("------1.add----------\n");
		printf("------2.sub----------\n");
		printf("------3.mul----------\n");
		printf("------4.div----------\n");
		printf("------5.exit---------\n");
		scanf("%d",&a);
		if(a == 1){
			printf("请输入需要运算的两个数\n");
			scanf("%d %d",&x,&y);
			add = x+y;
			printf("%d+%d = %d\n",x,y,add);
		}
		if(a == 2){
			printf("请输入需要运算的两个数\n");
			scanf("%d %d",&x,&y);
			sub = x-y;
			printf("%d-%d = %d\n",x,y,sub);
		}
		if(a == 3){
			printf("请输入需要运算的两个数\n");
			scanf("%d %d",&x,&y);
			mul = x*y;
			printf("%d*%d = %d\n",x,y,mul);
		}
		if(a == 4){
			printf("请输入需要运算的两个数\n");
			scanf("%d %d",&x,&y);
			div = x/y;
			printf("%d/%d = %d\n",x,y,div);
		}
		if(a == 5){
			return 0;
		}
	}

	return 0;
}
