#include <stdio.h>
#define STUDENTNUM 4

struct student {
	int ID;
	int score;
};

void main(void) {
	struct student s[STUDENTNUM];
	int i, sum = 0;
	int max = 0, max_num;
	
	for(i=0; i<STUDENTNUM; i++){
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		
		printf("Input the score: ");
		scanf("%d", &s[i].score);
	}
	
	for(i=0; i<STUDENTNUM; i++){
		sum = sum + s[i].score;
		if(s[i].score > max) {
			max = s[i].score;
			max_num = i;
		}
	}
	
	printf("The average of the score: %f\n", (double) sum/STUDENTNUM);
	printf("The highest score - ID: %d, score: %d", s[max_num].ID, s[max_num].score);
}
