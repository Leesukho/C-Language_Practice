#include <stdio.h>

int main(void)
{
	int number,i,j;
	printf("���ϴ� �������� ���� �Է����ּ���: ");
	scanf("%d",&number);
	for(i=1;i<10;i++){
		printf("%d * %d = %d\n", number,i,number*i);
	}
	return 0;
 } 
