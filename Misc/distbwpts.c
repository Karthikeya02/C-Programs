#include<stdio.h>
#include <math.h>
int main(void)
{
float x1, y1, x2, y2, side1, side2, distance;
printf("Please enter two points like (x1,y1) (x2,y2):");
scanf("(%f,%f) (%f,%f)", &x1, &y1, &x2, &y2);
side1 = x2 - x1;
side2 = y2 - y1;
distance = sqrt(side1*side1 + side2*side2);
printf("Dist b/w pts = %f\n", distance);
return 0;
}
