#include <stdio.h>

void bubble(void *base,int count,int size,int (*cmp)(void *,void *));
int compare_int(void *p1,void *p2);
int copare_char(void *p1,void *p2);
void swap(void *p1,void *p2,int size);


int main(int argc, const char *argv[])
{
	int arr[10] = {0,1,6,7,8,9,3,2,5,4};
	int count = sizeof(arr)/sizeof(arr[0]);
	int size = sizeof(arr[0]);
	bubble(arr,count,size,compare_int);
	int i;
	for(i = 0;i < count;i++){

		printf("%d\t",arr[i]);
	}
	putchar(10);

	return 0;
}
void bubble(void *base,int count,int size,int (*cmp)(void *,void *)){
	int i,j;
	for(i = 0;i < count-1;i++){
		for(j = 0;j < count-1-i;j++){
			if(cmp((char*)base+j*size,(char*)base+(j+1)*size)>0){
				swap((char*)base+j*size,(char*)base+(j+1)*size,size);
			}
		}
	}
}

int compare_int(void *p1,void *p2){
	return (*(int*)p1) - (*(int*)p2);
}
int copare_char(void *p1,void *p2){
	return (*(char*)p1) - (*(char*)p2);
}
void swap(void *p1,void *p2,int size){
	int i = 0;
	for(i = 0;i < size;i++){
		char temp = *((char*)p1+i);
		*((char*)p1+i) = *((char*)p2+i);
		*((char*)p2+i) = temp;
	}
}
