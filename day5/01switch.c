#include <stdio.h>
int main(int argc, const char *argv[])
{
	float n;
	printf("请输入学生成绩\n");
	scanf("%f",&n);
	
	if(n < 0 || n > 100){
		printf("输入错误，请重试！\n");
		return -1;
	}

	switch((int)n/10){
		case 10:
		case 9:puts("您的成绩等级为A");break;
		case 8:puts("您的成绩等级为B");break;
		case 7:puts("您的成绩等级为C");break;
		case 6:puts("您的成绩等级为D");break;
		default:puts("您的成绩等级为E");break;
	}

	return 0;
}
