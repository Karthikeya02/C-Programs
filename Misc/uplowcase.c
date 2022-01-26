#include <stdio.h>
int main(void)
{
char ch;
printf("Please enter a uppercase letter:");
scanf("%c", &ch);
char lowerCh = (int) ch + 32;
printf("Lower case of %c is %c\n", ch, lowerCh);
return 0;
}
