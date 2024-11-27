/*
#include <stdio.h>

struct point {
	int x;
	int y;
};

int getArea(struct point p1, struct point p2);

int main(int argc, char *argv[]) {
	struct point p1, p2;
	int area;
	
	
	printf("Input the coordinate p1 (x, y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("Input the coordinate p2 (x, y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	area = getArea(p1, p2);
	printf("Area: %d", area);
}

int getArea(struct point p1, struct point p2){
	int area;
	area = (p2.x - p1.x)*(p2.y - p1.y);
	
	if(area > 0)
		return area;
	else 
		return -area;
	
	return area;
}
*/

#include <stdio.h>

struct point {
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2);

int main(int argc, char *argv[]) {
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	int area;
	
	pPtr1 = &p1;
	pPtr2 = &p2;
	
	
	printf("Input the coordinate p1 (x, y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("Input the coordinate p2 (x, y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	area = getArea(pPtr1, pPtr2);
	printf("Area: %d", area);
}

int getArea(struct point *pPtr1, struct point *pPtr2){
	int area;
	area = (pPtr1->x - pPtr2->x)*(pPtr1->y - pPtr2->y);
	
	if(area > 0)
		return area;
	else 
		return -area;
}
