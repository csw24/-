#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b){
	return a+b;
}

int square(int a){
	return a*a;
}

int get_max(int a, int b){
	if(a>b){
		return a;
	} 
	else {
		return b;
	}
}

int main() {
	int a, b, sum, squ, max;
	
	printf("Enter the integer: ");
	scanf("%d %d", &a, &b);
	
	sum = sumTwo(a, b);
	squ = square(a);
	max = get_max(a, b);
	
	printf("Result - Sum: %d, Square: %d, Max: %d", sum, squ, max);
	return 0;
}
