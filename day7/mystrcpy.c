#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char src[] = "hello world";
	char dest[128] = {0};
	int i = 0;
	
	for(i = 0;i<strlen(src);){
	
		dest[i] = src[i++];
	}
	printf("dest = %s\n",dest);
	return 0;
}
