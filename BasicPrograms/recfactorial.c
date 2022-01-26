#include<stdio.h>
int fact(int);
int main()
{
	int a,b;
	printf("Enter a number\n");
	scanf("%d", &a);
	b = fact(a);
	printf("Factorial of %d is %d\n", a, b);
	return 0;
}

int fact(int a)
{
	int f;
	if(a==1)
	return(1);
	else
	f = a * fact(a-1);
	return(f);
}
