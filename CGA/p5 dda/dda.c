#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main() {
	float x, y, x1, y1, x2, y2, dx, dy, pixel;
	int i, gd=DETECT, gm;

	printf("Enter the value of x1: ");
	scanf("%f", &x1);
	printf("Enter the value of y1: ");
	scanf("%f", &y1);
	printf("Enter the value of x2: ");
	scanf("%f", &x2);
	printf("Enter the value of y2: ");
	scanf("%f", &y2);

	initgraph(&gd, &gm, "..\\BGI");

	dx = abs(x2-x1);
	dy = abs(y2-y1);

	if(dx>=dy) {
		pixel = dx;
	}
	else {
		pixel = dy;
	}

	dx = dx/pixel;
	dy = dy/pixel;

	x = x1;
	y = y1;
	i = 1;
	while(i<pixel) {
		putpixel(x, y, WHITE);
		x = x + dx;
		y = y + dy;
		i = i + 1;
		delay(50);
	}

	getch();
	closegraph();
}