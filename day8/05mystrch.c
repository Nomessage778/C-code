#include <stdio.h>
int main(int argc, const char *argv[])
{
	char str[] = "hello";
	char ch;
	char *p = str;
	int a = 0;
	scanf("%c",&ch);
//	getchar("10");
#if 0
	while(ch != *p){
		if(*p == 0){
			printf("-1\n");
			return 0;
		}
		p = p+a;
		a++;
	}
#
	while(*p){
		if(ch == *p){
			printf("%c在字符串%s中的下标为%d\n",ch,str,a);
			return 0;
		}
		p++;
		a++;
	}
#endif
	while(str[a]){
		if(ch == str[a]){
			printf("%c在字符串%s中的下标为%d\n",ch,str,a);
			return 0;
		}
		a++;
	}
	printf("-1\n");
	return 0;
}
