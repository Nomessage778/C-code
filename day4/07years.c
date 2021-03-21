#include <stdio.h>
int main(int argc, const char *argv[])
{
	int year;
	printf("请输入一个年份\n");
	scanf("%d",&year);
	getchar();
	
	if(year<0){
		printf("输入错误，请重新输入！\n");
		return -1;
	}
	if(year%100==0){
		if(year%400==0){
			printf("%d年是闰年\n",year);
		}else{
			printf("%d年是平年\n",year);
		}
	}else{
		if(year%4==0){
			printf("%d年是闰年\n",year);
		}else{
			printf("%d年是平年\n",year);
		}
	}
	
	return 0;
}
