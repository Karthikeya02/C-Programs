#include <stdio.h>
int main()
{
char ch;
printf("Please enter a character:");
scanf("%c", &ch);
int ascii = (int) ch;
printf("ASCII Value of %c is %i\n", ch, ascii);
return 0;
}
