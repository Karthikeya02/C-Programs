/* Converting miles to Kilometers */

#include<stdio.h>
int main()
{
	int miles;
	printf("Enter Miles: ");
	scanf("%d",&miles);
	printf("%d miles = %1.3f kilometers\n",miles,miles*1.609);
	return 0;
}
