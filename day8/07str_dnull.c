#include <stdio.h>
int main(int argc, const char *argv[])
{
	char src[] = "ni chou sha";
	char dest[128] = "";
	char *p = src;
	char *q = dest;
    int i = 0;
	int j = 0;
#if 0
	while(*p){
		if(*p != 32){
			*q = *p;
			q++;
		}
		p++;
	}
#endif
	while(src[i]){
		if(src[i] != 32){
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	printf("%s\n",dest);
	return 0;
}
