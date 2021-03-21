#include <stdio.h>

int main(int argc, const char *argv[])
{
	int line,i,j,k;
	printf("请输入行数\n");
	scanf("%d",&line);

	if(line<0){
		printf("输入错误，请重试！\n");
		return -1;
	}
	//a=line;
	for(i=0;i<line;i++){
		for(j=0;j<i;j++){
			putchar(' ');
		}
		for(k=0;k<line-i;k++){
			putchar('*');
		}
		putchar(10);
	}
	return 0;
}
