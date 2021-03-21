#include <stdio.h>

void add(int x, int y){
	printf("请输入需要进行运算的两个数字\n");
	scanf("%d %d",&x,&y);
	printf("%d + %d = %d\n",x,y,x+y);
}
void sub(int x, int y){
	printf("%d - %d = %d\n",x,y,x-y);
}
void mul(int x, int y){
	printf("%d * %d = %d\n",x,y,x*y);
}
void div(int x, int y){
	printf("%d / %d = %d\n",x,y,x/y);
}

void menu(){
	printf("----------计算器--------------\n");
	printf("----------1.add---------------\n");
	printf("----------2.sub---------------\n");
	printf("----------3.mul---------------\n");
	printf("----------4.div---------------\n");
	printf("----------0.exit--------------\n");
}

int main(int argc, const char *argv[])
{
	int input = 1;
	int x = 0;
	int y = 0;
	void (*p[5])(int , int) = {0,add,sub,mul,div};
	while(input){
		menu();
		printf("请选择您要进行的运算\n");
		scanf("%d",&input);
		//if(input == 0){
		//	break;
		//	}
		//printf("请输入需要进行运算的两个数字\n");
		//scanf("%d %d",&x,&y);
		(p[input])(x,y);
	}
	return 0;
}
