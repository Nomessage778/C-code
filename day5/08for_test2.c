#include <stdio.h>

int main(int argc, const char *argv[])
{
	int line,i,j,k,a=70;
#if 0
	printf("请输入行数\n");
	scanf("%d",&line);

	if(line<0){
		printf("输入错误，请重试！\n");
		return -1;
	}
#endif
	//a=line;
	for(i=0;i<6;i++){
		for(j=0;j<i;j++){
			putchar('_');
		}
		for(k=0;k<i+1;k++){
			putchar(70-k);
		}
		putchar(10);
	}
	return 0;
}
