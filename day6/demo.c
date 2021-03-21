#include <stdio.h>
int main(int argc, const char *argv[])
{
	int arr[4];
	int i, sum = 0;
	
	scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
	for(i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
		sum=sum+arr[i];
	}
	printf("%d\n",sum);
	return 0;
}
