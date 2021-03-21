#include <stdio.h>
int main(int argc, const char *argv[])
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int (*p)[10] = &arr;
	int i;
	int q;
	printf("%p\n",p);
#if 1 
	for(i=0;i<10;i++){
	//	q=(*(*p)+0))+i;
		
		printf("%d\t",&arr[i]);
		printf("%p\t",p);
		printf("%d\n",*(*p+i));
		//*p=*p+i;
	}
#endif
	
	return 0;
}
