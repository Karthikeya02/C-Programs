#include<stdio.h>
int main(void)
{
char ch;
printf("Please enter a character:");
scanf("%c", &ch);
char prevCh = (int) ch - 1;
printf("The letter before %c is %c", ch, prevCh);
return 0;
}
