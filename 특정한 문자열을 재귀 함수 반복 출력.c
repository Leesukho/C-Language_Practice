#include <stdio.h>
//재귀함수 (Recursive Function) 
void print(int count)
{
	if(count ==0){
		return;
	}
	else{
		printf("문자열을 출력합니다%d.\n",count);
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
