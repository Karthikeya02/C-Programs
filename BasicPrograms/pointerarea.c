#include<stdio.h>
void arper(float,float *,float *);
int main()
{
	float radius;
	float area,perimeter;
	printf("Enter the radius of circle\n");
	scanf("%f", &radius);
	printf("Location of Radius = %u\n", &radius);
	arper(radius, &area, &perimeter);
	printf("Area=%.2f\nPerimeter=%.2f\n", area, perimeter);
	return 0;
}

void arper(float r, float *a,float *p)
{
	*a = 3.14 * r * r;
	*p = 2 * 3.14 * r;
}
