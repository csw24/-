#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	char cal;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d", &num1, &cal, &num2);
	
	if(cal == '+'){
		printf("= %d", num1 + num2);
	}
	else if(cal == '-'){
		printf("= %d", num1 - num2);
	}
	else if(cal == '*'){
		printf("= %d", num1*num2);
	}
	else if(cal == '/'){
		printf("= %d", num1/num2);
	}
	return 0;
}
