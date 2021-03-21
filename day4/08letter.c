#include <stdio.h>
int main(int argc, const char *argv[])
{
	char ch;
	printf("请输入一个字母\n");
	scanf("%c",&ch);
	getchar();
	
	if(ch<'A' || (ch>'Z' && ch<'a') || ch>'z'){
		printf("输入错误，请重试！\n");
		return -1;
	}
	
	if(ch>='A' && ch<='Z'){
		printf("%c\n",ch+32);
	}else if(ch>='a' && ch<='z'){
		printf("%c\n",ch-32);
	}
	
	return 0;
}
