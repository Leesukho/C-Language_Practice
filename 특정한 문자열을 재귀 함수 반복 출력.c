#include <stdio.h>
//����Լ� (Recursive Function) 
void print(int count)
{
	if(count ==0){
		return;
	}
	else{
		printf("���ڿ��� ����մϴ�%d.\n",count);
		print(count-1);
	}
 } 

int main(void)
{
	int a;
	scanf("%d",&a);
	print(a);
	return 0;
}
