#include <stdio.h>
int main(int argc, const char *argv[])
{
	int score[3][3] = {
	
	};

	int max = 0, i = 0, j = 0;
	int line = 0, col = 0;
	for(i = 0;i < 3;i++){
	for(j = 0;j < 3;j++){
	if(max<score[i][j]){
		max = score[i][j];
		line = i;
			col = j;
	}
	}
	}
	printf("学生的最高成绩为%d,在第%d行，第%d列\n",max,i,j);
	return 0;
}
