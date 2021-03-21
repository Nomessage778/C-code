#include <stdio.h>
int main(int argc, const char *argv[])
{
	int arr[5] ={1,2,3,4,5};
	int i;
	for(i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
	printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
