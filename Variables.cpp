#include <stdio.h> 

int main(void)
{
	int x=5;
	float y=123423.123423;
	double z=123423.123423;
	printf("%d\n",x); //int varias
	printf("���� x�� �޸� ũ��� %d�Դϴ�,\n",sizeof(x));// x=4byte
	printf("���� x�� ������ %d�Դϴ�.\n\n",sizeof(x)/4);// x=4byte
	printf("float y=%f\n",y);// �Ҽ��� Ǯ 
	printf("float y=%.2f\n",y);// �Ҽ��� �ι�°�ڸ� ���� 
	printf("���� y�� �޸� ũ��� %d�Դϴ�.\n\n",sizeof(y));// y=4byte
	printf("double z=%f\n",z);// �Ҽ��� Ǯ 
	printf("double z=%.2f\n",z);// �Ҽ��� �ι�°�ڸ� ���� 
	printf("���� z�� �޸� ũ��� %d�Դϴ�.\n\n",sizeof(z));// z=8byte
	return 0;
}
