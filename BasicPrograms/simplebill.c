#include<stdio.h>
void bill(int a,float b, int c);
int main()
{
	int qty,dis;
	float rate;
	printf("Enter Quantity\n");
	scanf("%d",&qty);
	printf("Enter rate\n");
	scanf("%f",&rate);
	bill(qty,rate,dis);
}

void bill(int a, float b,int c)
{
	if (a>10)
	{dis=10;
	printf("Thank You!\nA discount of %d (%) has been applied on your order\n",c);
	int bill=(a*b)-(10*b*c/100);
	printf("Your Bill: $ %d\n",bill);}
	else
	dis=0;
	int bill=(a*b)-(10*b*c/100);
	printf("Your Bill: $ %d\n",bill);
}
