#include <stdio.h> 

int main(void)
{
	int x=5;
	float y=123423.123423;
	double z=123423.123423;
	printf("%d\n",x); //int varias
	printf("변수 x의 메모리 크기는 %d입니다,\n",sizeof(x));// x=4byte
	printf("변수 x의 갯수는 %d입니다.\n\n",sizeof(x)/4);// x=4byte
	printf("float y=%f\n",y);// 소숫점 풀 
	printf("float y=%.2f\n",y);// 소숫점 두번째자리 까지 
	printf("변수 y의 메모리 크기는 %d입니다.\n\n",sizeof(y));// y=4byte
	printf("double z=%f\n",z);// 소숫점 풀 
	printf("double z=%.2f\n",z);// 소숫점 두번째자리 까지 
	printf("변수 z의 메모리 크기는 %d입니다.\n\n",sizeof(z));// z=8byte
	return 0;
}
