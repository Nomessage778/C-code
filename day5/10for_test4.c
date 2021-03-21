#include <stdio.h>

int main(int argc, const char *argv[])
{
	int R,i,j,n1=0,n2=0;
	printf("请输入一个数\n");
	scanf("%d",&R);
	if(R == 0){
		printf("0\n");
		return;
	}
	printf("0b");
	for(i=32-1;i>=0;i--){
		printf("%d",(R&(1<<i)) != 0);
	}
	for(j=32-1;j>=0;j--){
		if(R&(1<<i)){ 
			n1++;
		}else{
			n2++;
		}
		}
	putchar(10);
	printf("1的个数为%d,0的个数为%d\n",n1,n2);
	return 0;
}
