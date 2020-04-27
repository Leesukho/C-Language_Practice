#include <stdio.h>

int main(void)
{
	int score = 85;
	
	if(score>=90){
		printf("Your scroe is A\n");
	}
	else if(score>=85){
		printf("Your score is B\n");
	}
	else if(score>=80){
		printf("Your scroe is C\n");
	}
	else{
		printf("Your score is D\n");
	}
	
	return 0;
}
