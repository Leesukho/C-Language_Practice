#include <stdio.h>
#define MONTHS 12

int main(void)
{
	double monthSalary = 1000.5;
	printf("$ %.2f\n\n\n",monthSalary*MONTHS); //=printf("$ %.2f\n",monthSalary*12);
	
	char x='A';//=char x=65   = int x=65;  (ASCII CODE)
	printf("%c\n",x);
	char y= 65;
	printf("%c\n",y);
	char z='B';
	printf("%d\n",z);
	
	
	return 0;
}
