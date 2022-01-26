#include<stdio.h>
int main()
{
	char first,middle,last;
	int dollars,quarters,dimes,nickles,pennies;
	int total_dollars,change,total_cents;
	printf("Type in your 3 initials and press return: ");
	scanf("%c %c %c", &first,&middle,&last);
	printf("%c%c%c, please enter your coin information:\n", first, middle, last);
	printf("Number of $ coins: ");
	scanf("%d", &dollars);
	printf("Number of quarters: ");
	scanf("%d", &quarters);
	printf("Number of dimes: ");
	scanf("%d", &dimes);
	printf("Number of nickles: ");
	scanf("%d", &nickles);
	printf("Number of pennies: ");
	scanf("%d", &pennies);
	total_cents=dollars*100+quarters*25+dimes*10+nickles*5+pennies*1;
	total_dollars=total_cents/100;
	change=total_cents%100;
	printf("%c%c%c\nCoin Credit Dollars: %d\nChange: %d\n",first,middle,last,total_dollars,change);
	return 0;
}
