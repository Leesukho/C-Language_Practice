#include <stdio.h>

int main(void)
{
	char o;
	int x,y;
	while(1)
	{
		printf("������ �Է��ϼ��� :");
		scanf("%d %c %d",&x,&o,&y);
		if(o=='+'){
			printf("%d %c %d = %d\n",x,o,y,x+y);
		}else if(o=='-'){
			printf("%d %c %d = %d\n",x,o,y,x-y);
		}else if(o=='*'){
			printf("%d %c %d = %d\n",x,o,y,x*y);
		}else if(o=='/'){
			printf("%d %c %d = %d\n",x,o,y,x/y);
		}else if(o=='%'){
			printf("%d %c %d = %d\n",x,o,y,x%y);
		}else{
			printf("�Է��� �߸� �Ǿ����ϴ�.\n");
			getchar(); //buffer �ٹٲ� 
		}getchar(); //buffer �ٹٲ� 
		printf("�ý����� ���� �Ͻðڽ��ϱ�? (y/n)\n");
		scanf("%c",&o);
		if(o=='y'||o=='Y'){
			break;
		}else{
			continue;
		}
	}
	return 0;
}
