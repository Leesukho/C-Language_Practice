#include <stdio.h>
	
	//반복함수를 이용해서 숫자 피라미드를 출력한다.
	//반복함수 같은 경우는 오직 FOR문과 WHILE 문으로 구성이 된다.

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
