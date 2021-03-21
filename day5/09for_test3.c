#include <stdio.h>

int main(int argc, const char *argv[])
{
	int R,i,n1=0,n2=0,flag=0;
	printf("请输入一个数\n");
	scanf("%d",&R);
	if(R == 0){
		printf("0\n");
		return;
	}
	printf("0b");
#if 0
	for(i=32-1;i>=0;i--){
		if(R&(1<<i)) break;
	}
	for(;i>=0;i--){
		printf("%d",(R&(1<<i)) != 0);
	}
#endif

	for(i=31;i>=0;i--){
		if(R&(1<<i)){
			flag=1;
			putchar('1');
			n1++;
		}else{
			//			if(flag == 1){
			putchar('0');
//		}
		n2++;
		}
	}

	putchar(10);
	printf("1的个数为%d，0的个数为%d\n",n1,n2);
	return 0;
}
