#include <stdio.h>
int main(int argc, const char *argv[])
{
	char src[] = "hello\0world";
	char dest[128] = {0};
	char *p = src;
	char *q = dest;
	int i;
	int j = 0;
#if 0
	for(i = 0;i < sizeof(src);i++){
		if(*p != 0){
			*q = *p;
			q++;
		}
		p++;
	}	
#endif
	for(i = 0;i < sizeof(src);i++){
		if(src[i] != 0){
			dest[j] = src[i];
			j++;
		}
	}	
	printf("%s\n",dest);
	return 0;
}
