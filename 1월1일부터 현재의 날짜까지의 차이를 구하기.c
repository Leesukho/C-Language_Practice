#include <stdio.h>

int getDays(int month, int day)
{
	int i,sum=0;
	for(i=1; i<month;i++){
		if(i==2)//�� ���α׷��� ������ �������� �ʽ��ϴ�.
		{
			sum+=28;
		 } 
		 else if((i%2 ==0&&i<7)||(i%2==1 && i>8) )
		 {
		 	sum+=30;
		 }
		 else
		 {
		 	sum+=31;
		 }
	}
	return sum+day;
 } 

int main(void)
{
	int month,day;
	printf("������ ��¥�� �Է��� �ּ���\n month:");
	scanf("%d",&month);
	printf("day:");
	 scanf("%d",&day);
	printf("1��1�Ϻ��� %d�� %d�� ������ ��¥�� %d�� �Դϴ�.",month,day,getDays(month,day));
	return 0;
}
