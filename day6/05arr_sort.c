#include <stdio.h>

int main(int argc, const char *argv[])
{

	int i,j,k,max;
	int arr[10] = {9,5,6,7,3,4,2,8,1,0};
	for(i = 0;i<sizeof(arr)/sizeof(arr[0])-1;i++){
	
		
		for(j=0;j<(sizeof(arr)/sizeof(arr[0]))-(1+i);j++){
	
			 if(arr[j]<arr[j+1]){
				 max = arr[j];
				 arr[j] = arr[j+1];
			 	 arr[j+1] = max;
			 }
			
	}
//		arr[i] = max;
	}
	for(k=0;k<sizeof(arr)/sizeof(arr[0]);k++){
	
		printf("arr[%d] = %d\n",k,arr[k]);
	}
	return 0;
}
