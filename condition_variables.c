#include <stdio.h>

int main(void)
{
	int x=-50, y=30;
	int absoluteX= (x>0)? x:-x;//���밪 ��ȯ
	int max=(x>y)? x:y;
	int min=(x<y)? x:y;
	printf("x: %d\nabsoluteValue:%d\n",x,absoluteX);
	printf("Max:%d\n",max);
	printf("Min:%d\n",min);
	 
	return 0;
}
