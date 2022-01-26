#include<stdio.h>
void increment();
int main()
{
	printf("Hiiii\n");
	increment();
	increment();
	increment();
	printf("i is auto which resets to 1 upon every function call.\tj is static which is initialized only once to 1.\ti dies when control return from increment() whereas j dies only after the prograam is excecuted.\n")
	return 0;	
}

void increment()
{
	auto int i = 1;
	static int j = 1;
	i++;
	j++;
	printf("i = %d\tj = %d\n", i, j);
}
