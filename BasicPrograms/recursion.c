#include<stdio.h>
int rec(int);
int main()
{
	int a, fact;
	printf("Enter a number : ");
	scanf("%d",&a);
	
	fact = rec(a);
	printf("%d Factorial = %d\n",a,fact);
	return 0;
}

int rec(int a)
{
	int f;
	
	if ( a==1)
		return (1);
	else
	f = a * rec(a-1);
	
	return(f);
}
