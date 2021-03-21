#include <stdio.h>
int main(int argc, const char *argv[])
{
	int arr[3][3];
	int i,j,k,sum;
	for(j = 0;j<sizeof(arr)/sizeof(arr[0]);j++){
		scanf("%d %d %d",&arr[j][0],&arr[j][1],&arr[j][2]);
	}
	for(j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
		sum = 0;
		for(i = 0;i<sizeof(arr[0])/sizeof(arr[0][0]);i++){
				sum = sum+*(arr[j]+i);
			//sum+=arr[j][i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
