#include<stdio.h>
void inc();
void inc()
{
auto int i=1;
static int j=1;
i=i+1;
j=j+1;
printf("%d %d\n",i,j);
}
int main()
{
	inc();
	inc();
	inc();
	inc();
	inc();
	inc();
	inc();
	inc();
	inc();
}
