#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void)
{
	int i,max,min,index,index1;
	int array[NUMBER];
	max=INT_MIN;
	index=0;
	index=0;
	min=INT_MAX;
	//array[0]~array[4]
	for(i=0;i<NUMBER;i++)
	{
		scanf("%d",&array[i]);
		if(max<array[i]){
			max=array[i];
			index=i;
		}
		if(min>array[i])
		{
			min=array[i];
			index1=i;
		}
	
	}	
	
	
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n",max,index+1);
	printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n",min,index1+1);
	return 0;
}
