#include <stdio.h>
int main(int argc, const char *argv[])
{
	char str[] = "hello world";
	int i = 0;
	int len =0;
	while(str[i]){
		i++;
		len++;
	}
	printf("字符串的长度为%d\n",len);
	return 0;
}
