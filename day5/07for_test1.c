#include <stdio.h>

int main(int argc, const char *argv[])
{
	int line,i,j,k,l;
	printf("请输入行数\n");
	scanf("%d",&line);

	if(line<0){
		printf("输入错误，请重试！\n");
		return -1;
	}
	//a=line;
	for(i=0;i<line;i++){
		for(j=0;j<line-(i+1);j++){
			putchar(' ');
		}
		for(k=0;k<2*i+1;k++){
			putchar('*');
		}
//	for(l=0;l<line-(i+1);l++){
//			putchar(' ');
//			}
		putchar(10);
	}
	return 0;
}
