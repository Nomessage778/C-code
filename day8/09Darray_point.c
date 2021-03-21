#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a[2][3] = {
		{1,2,3},
		{7,8,9}
	};
	int (*p)[3] = a;
	int i;
	int j;
#if 1 
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
	//	q=(*(*p)+0))+i;
		for(j=0;j<sizeof(a[0])/sizeof(a[0][0]);j++){
			printf("%d\n",(*p)[j]);
		}
		//*p=*p+i;
	}
#endif
	
	return 0;
}
