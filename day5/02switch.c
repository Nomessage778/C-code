#include <stdio.h>
int main(int argc, const char *argv[])
{
	int year,month;
	printf("请输入一个月份,格式为xxxx.xx\n");
	scanf("%d.%d",&year,&month);

	if(month<1 || month>12 || year<0){
		printf("输入错误，请重试！\n");
		return -1;
	}

	switch(month){
		case 1:printf("本月有31天\n");break;
		case 3:printf("本月有31天\n");break;
		case 5:printf("本月有31天\n");break;
		case 7:printf("本月有31天\n");break;
		case 8:printf("本月有31天\n");break;
		case 10:printf("本月有31天\n");break;
		case 12:printf("本月有31天\n");break;
		case 4:
		case 6:
		case 9:
		case 11:puts("本月有30天");break;
		default:{if((year%4==0 && year%100!=0) 
						|| (year%400==0)){
					puts("本月有29天");
				}else{
					puts("本月有28天");
				}
				}break;
	}
	return 0;
}
