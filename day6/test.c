#include <stdio.h>
int main(int argc, const char *argv[])
{
	int i;
	char ch[10] = {0};
	scanf("%s",&ch[0]);
	for(i=0;i<10;i++){
		printf("%c\n",ch[i]);
	}
	return 0;
}
