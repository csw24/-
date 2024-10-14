#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, cnt = 0, answer = 7;
	
	do {
		printf("Guess a number: ");
	  	scanf("%d", &num);
	  	cnt++;
	  	if(num > answer){
	  		printf("Low!\n");
		}
		else if(num < answer){
			printf("High!\n");
		}
		else{
			printf("Congratulations! Trials: %d", cnt);
		}
	}
	while(num != answer);
	return 0;
}
