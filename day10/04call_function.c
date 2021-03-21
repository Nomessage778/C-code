#include <stdio.h>

void bubble(int arr[],int count){
	int i,j;
	for(i = 0;i < count-1;i++){
	for(j = 0;j < count-1-i;j++){
		if(arr[j]>arr[j+1]){
			int temp;
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
	}
}


int main(int argc, const char *argv[])
{
	int arr[10] = {0,1,6,7,8,9,3,2,5,4};
	int count = sizeof(arr)/sizeof(arr[0]);
	int size = sizeof(arr[0]);
	bubble(arr,count);
	int i;
	for(i = 0;i < count;i++){
	
		printf("%d\t",arr[i]);
	}
	putchar(10);

	return 0;
}
