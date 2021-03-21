#include <stdio.h>
int main(int argc, const char *argv[])
{
	char str1[] = "hellow";
	char str2[] = "hello";
	char *p = str1;
	char *q = str2;
	int i = 0;
#if 0
	while(*p == *q){
		if(*p == '\0'){
			printf("0\n");
			return 0;
		}
		p++;
		q++;
	}
	int a = *p>*q?1:-1;
#endif
	while(str1[i] == str2[i]){
		if(str1[i] == '\0'){
			printf("0\n");
			return 0;
		}
		i++;
	}
	int a = str1[i]>str2[i]?1:-1;
	printf("%d\n",a);
	return 0;
}
