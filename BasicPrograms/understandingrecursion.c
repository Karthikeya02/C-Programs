#include<stdio.h>
int rec(int);
int main()
{
	int a,b;
	printf("Enter a number nigga\n");
	scanf("%d",&a);
	b = rec(a);
	printf("FACTORIAL = %d\n",b);
	return 0;
}

int rec(int a)
{
	int f;
	
	if ( a==1)
		return (1);
	else
	f = a * rec(a-1);
	return f;
}

/* Lets Take 3

int rec(3)
{
	int f;
	f = 3* rec(2);
				{	int rec(2)
					{f = 2* rec(1);}
								{	int rec(1)
									{if ( a==1)
									return (1);}
								}
				}
	return(f);
}
*/
