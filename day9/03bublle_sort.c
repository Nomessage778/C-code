#include <stdio.h>

void bublle_sort(int a[10],int size){
	int i = 0;
	int j = 0;
	int min;
	for(j = 0;j < size-1;j++){
		for(i = 0;i < size-1-j;i++){
			if(a[i]>a[i+1]){
				min = a[i];
				a[i] = a[i+1];
				a[i+1] = min;
			}
		}
	}

}
#if 1
void show(int a[10],int size){
	int i;
	for(i = 0;i < size;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
#endif
int main(int argc, const char *argv[])
{
	int arr[10] = {1,3,5,6,7,2,4,9,8,0};

	int size = sizeof(arr)/sizeof(arr[0]);

	bublle_sort(arr,size);

	show(arr,size);

	return 0;
}
