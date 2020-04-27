#include <stdio.h>
#define N 10

int main(void)
{
	int i,j;
	for(i=0;i<N;i++){  //1~10
		for(j=N-i-1;j>0;j--){ //9>0스페이스 
			printf("  ");
		}
		for(j=0;j<i;j++){//i갯수만큼 별 
			printf("★");
		}
		for(j=0;j<i-1;j++){//i-1개만큼 별 
			printf("★");
		}
		printf("\n");
	}
	return 0;
}
