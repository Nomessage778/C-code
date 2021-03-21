#include <stdio.h>
int main(int argc, const char *argv[])
{
	char src[] = "5555bcdefg";
	char dest1[128] = {0};
	char *p = src;
	char *q = dest1;
	int i = 0;
#if 0
	while (*p){
		*q = *p;
		p++;
		q++;
	}
	p = NULL;
	q = NULL;
#endif
	while(src[i]){
		dest1[i] = src[i];
		i++;
	}
	printf("dest1 = %s\n",dest1);
	return 0;
}
