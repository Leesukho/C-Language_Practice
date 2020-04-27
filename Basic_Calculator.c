#include <stdio.h>

int main(void)
{
	char o;
	int x,y;
	while(1)
	{
		printf("수식을 입력하세요 :");
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
			printf("입력이 잘못 되었습니다.\n");
			getchar(); //buffer 줄바꿈 
		}getchar(); //buffer 줄바꿈 
		printf("시스템을 종료 하시겠습니까? (y/n)\n");
		scanf("%c",&o);
		if(o=='y'||o=='Y'){
			break;
		}else{
			continue;
		}
	}
	return 0;
}
