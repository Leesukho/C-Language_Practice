#include <stdio.h>

int main(void)
{
	int number,i,j;
	printf("원하는 구구단의 단을 입력해주세요: ");
	scanf("%d",&number);
	for(i=1;i<10;i++){
		printf("%d * %d = %d\n", number,i,number*i);
	}
	return 0;
 } 
