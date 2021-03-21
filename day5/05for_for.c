#include <stdio.h>
int main(int argc, const char *argv[])
{
	int line,i,j;
	printf("请输入行数\n");
	scanf("%d",&line);

	if(line<0){
		printf("输入错误，请重试！\n");
		return -1;
	}
	for(i=0;i<line;i++){
		for(j=0;j<=i;j++){
			putchar('*');
		}
		putchar(10);
	}
	return 0;
}
