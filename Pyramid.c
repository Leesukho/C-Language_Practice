#include <stdio.h>
#define N 10

int main(void)
{
	int i,j;
	for(i=0;i<N;i++){  //1~10
		for(j=N-i-1;j>0;j--){ //9>0�����̽� 
			printf("  ");
		}
		for(j=0;j<i;j++){//i������ŭ �� 
			printf("��");
		}
		for(j=0;j<i-1;j++){//i-1����ŭ �� 
			printf("��");
		}
		printf("\n");
	}
	return 0;
}
