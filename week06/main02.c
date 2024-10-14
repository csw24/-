#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	if(num>=0){
		printf("%d", num);
	} 
	else {
		printf("%d", -1*num);
	}
	return 0;
}
