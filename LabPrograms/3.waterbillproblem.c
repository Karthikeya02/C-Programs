#include<stdio.h>
#define DEMAND_CHG 35.00
#define PER_1000_CHG 1.10
#define LATE_CHG 2.00
int main()
{
	int previous,current;
	double unpaid,bill,use_charge,late_charge;
	printf("Enter unpaid balance [Enter 0 if none] : $");
	scanf("%lf", &unpaid);
	printf("Enter previous meter reading: $");
	scanf("%d", &previous);
	printf("Enter current meter reading: $");
	scanf("%d", &current);
	use_charge=(current-previous) * PER_1000_CHG;
	if(unpaid!=0)
	{
		bill = use_charge+LATE_CHG+unpaid;
		printf("Bill includes $%1.2lf late charge on unpaid balance of %1.2lf\n Total Due = $%1.2lf\n", LATE_CHG, unpaid,bill);
	}
	else
	bill= use_charge;
	printf("Total Due = $%1.2lf\n",bill);
	return 0;
}	
