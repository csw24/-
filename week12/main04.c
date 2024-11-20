#include <stdio.h>

int main(void) {
	int i, sum = 0;
	int grade[5];
	
	for(i=0; i<5; i++){
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	int (*ptr)[5];
	ptr = &grade;
	for(i=0; i<5; i++){
		printf("grade[%d] = %d\n", i, (*ptr)[i]);
		sum = sum + (*ptr)[i];
	}
	printf("%d", sum/5);
	return 0;
}
