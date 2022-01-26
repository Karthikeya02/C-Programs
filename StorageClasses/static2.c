#include<stdio.h>
int main()
{
	static int i=0;
	auto int j=0;
	printf("%d %d\n",i,j);
	{
		i++;
		printf("%d\n",i);
		++i;
		printf("%d\n",i);
		j++;
		printf("%d\n",j);
		++j;
		printf("%d\n",i);
		{
			i++;
			printf("%d\n",i);
			++i;
			printf("%d\n",i);
			j++;
			printf("%d\n",j);
			++j;
			printf("%d\n",i);
		}
	}
}
