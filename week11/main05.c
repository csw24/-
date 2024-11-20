#include <stdio.h>

void main(void) {
	int i;
	char a[100];
	FILE *fp = NULL;
	
	fp = fopen("sample.txt", "w");
	for(i=0; i<3; i++){
		printf("Input a word:");
		scanf("%s", &a);
		fprintf(fp, "%s\n", a);
	}
	
	fclose(fp);
}
