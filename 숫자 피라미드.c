#include <stdio.h>
	
	//�ݺ��Լ��� �̿��ؼ� ���� �Ƕ�̵带 ����Ѵ�.
	//�ݺ��Լ� ���� ���� ���� FOR���� WHILE ������ ������ �ȴ�.

	int print(int a)
	{
		int i,j;
		for(i=0; i<a; i++)
		{
			for(j=a-i-1;j>0;j--)
			{
				printf("  ");
			}
			for(j=0;j<=i;j++)
			{
				
				if(j>=9){
					printf("%d",j+1);
				}
				else{
				printf("%d ",j+1);	
				}
			}
			for(j=0;j<i;j++)
			{
				printf("%d ",j+1);
			}
			printf("\n");
		}
	 } 
	 
	 
int main(void)
{
	int a;
	scanf("%d",&a);
	print(a);
	return 0;
}
