#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	printf("This is ");
	if(num>0){
		printf("positive number.");
	}
	else if(num<0){
		printf("nagative number.");
	} else {
		printf("0.");
	}
	return 0;
}
