/*
Calculate the sum of all  prime numbers b/w 1 & a given prime number
*/

#include<stdio.h>
int main()
{
	int N, n, F, i, S=0;
	printf("Enter the number: ");
	scanf("%d",&N);
	for(n=0;n<N;n++)
	{
		F=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				F = 1;
				break;
			}
		}
		if(F==0)
		{
			if(n!=1)
			{
				printf("%d\t",n);
				S = S + n;
			}
		}
	}
	printf("\nSum of Prime Numbers = %d\n", S);
	return 0;
}
