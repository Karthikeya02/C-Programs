#include<stdio.h>
int i;
void increment();
void decrement();
int main()
{
	printf("i=%d\n", i);
	increment();
	increment();
	decrement();
	decrement();
	return 0;
}

void increment()
{
	i++;
	printf("on incrementing i = %d\n", i);
}

void decrement()
{
	i--;
	printf("on decrementing i = %d\n", i);
}
