#include <stdio.h>

int main(void)
{
	/*
	윤년=> 4년마다, 그렇지만 100년 단위일 때는 윤년에 해당하지 않도록
	 윤년=>400년 단위일때는 어떤 상황이든간에 윤년으로 설정 
	*/
	int year = 2113;
	
	
	if((year%4==0&&year%100!=0)||year%400==0){
		printf("%d년은 윤년이 있습니다.\n",year);
		}
	else{
		printf("%d년은 윤년이 없습니다.\n",year);		
	}
	return 0;
}
