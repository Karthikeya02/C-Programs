#include<stdio.h>
int fib(int m)
{
	if(m<2)
		{ return (m);}
	else
		{return fib(m-1)+fib(m-2);}
}

int main()
{
	int n,i;
	printf("Enter number of terms req to print: ");
	scanf("%d",&n);
	printf("Fibanocci Series: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
	printf("\n");
}

