#include <stdio.h>

int getDays(int month, int day)
{
	int i,sum=0;
	for(i=1; i<month;i++){
		if(i==2)//이 프로그램은 윤년을 감안하지 않습니다.
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
	printf("현재의 날짜를 입력해 주세요\n month:");
	scanf("%d",&month);
	printf("day:");
	 scanf("%d",&day);
	printf("1월1일부터 %d월 %d일 까지의 날짜는 %d일 입니다.",month,day,getDays(month,day));
	return 0;
}
