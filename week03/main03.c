#include <stdio.h>

int main(void) {
	char input, output;
	
	printf("enter a character: ");
	scanf("%c", &input);
	
	output = input + 1;
	
	printf("the next character of %c (%d) is %c (%d)", input, input, output, output);
	
	return 0;
}
