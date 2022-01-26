#include<stdio.h>
int main()
{
	auto int i = 1;
	{
		auto int i = 1337;
		{
			auto int i = 2;
			printf("i = %d\n", i);
		}
		printf("i = %d\n",i);
	}
	printf("i = %d\n",i);
}
