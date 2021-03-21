#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char str[] = "abcddcba";
	char *p = str;
	char *q = &str[0]+(strlen(str)-1);
	int start = 0;
	int	end = sizeof(str)-2;
	//scanf("%s",&str);
#if 0
	while(*p<*q){
		if(*p != *q){
			printf("-1\n");
			return 0;
		}
		p++;
		q--;
	}
#endif
	while(start < end){
		if(str[start] != str[end]){
			printf("-1\n");
			return 0;
		}
		start++;
		end--;
	}
	printf("1\n");
	return 0;
}
