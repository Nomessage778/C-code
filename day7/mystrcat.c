#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
	char src[] = "world cpdd";
	char dest[128] = "hello";
//	char dest[] = "hello";
#if 0
	int i,index = strlen(dest);
	for(i = 0;i<sizeof(src);i++){
	
		dest[index++] = src[i];
	}
#endif
	int i = 0;
	int index = strlen(dest);

	while(src[i]){
		dest[i+index]=src[i];
		i++;
	}
	dest[i+index] = 0;
	printf("dest = %s\n",dest);
	return 0;
}
