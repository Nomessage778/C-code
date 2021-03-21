#include <stdio.h>
int main(int argc, const char *argv[])
{
	char ch1[10];
	int arr[26] = {0};
	int i,j,a,b;
	canf("%s",&ch1[0]);

	for(i = 0;i<sizeof(ch1)/sizeof(ch1[0]);i++){
		b = ch1[i]-'a';
		arr[b]++;

	}
	for(j = 0;j < 26;j ++){
		a = arr[j];
		if(a != 0){
			printf("%c的个数为%d个\n",97+j,a);
		}
	}
	return 0;
}
