#include <stdio.h>

void bublle_sort(int a[10],int size){
	int i = 0;
	int j = 0;
	int temp;
	for(i = 0;i < size-1;i++){
		for(j = 0;j < size-1-i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
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
