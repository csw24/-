#include <stdio.h>
#include <stdlib.h>

int get_integer(){
	int n;
	printf("Enter the value: ");
	scanf("%d", &n);
	return n;
}

int factorial(int n){
	int res = 1, i;
	for(i=1; i<=n; i++){
		res = res*i;
	}
	return res;
}

int combination(int n, int r){
	return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int main(void) {
	int a = get_integer(), b = get_integer(), com;
	
	com = combination(a, b);
	printf("The result of C(%d, %d) is %d.", a, b, com);
	return 0;
}
