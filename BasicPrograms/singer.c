#include<stdio.h>
#include<string.h>
void main()
{
   char a[20];
   printf("Who is your favourite singer?\n");
   gets(a);
   printf("Input =");
   puts(a);
   if (0==strcmp(a,"The Weeknd"))
   printf("You are a man of taste\n");
   else if (0==strcmp(a,"The_Weeknd"))
   printf("You are a man of taste and culture\n");
   else if (0==strcmp(a,"the weeknd"))
   printf("Aha! You are a man of taste and culture\n");
   else if (0==strcmp(a,"the_weeknd"))
   printf("Aha! You are a man of taste and culture\n");
   else
   printf("Too Badd! Check out The Weeknd\n");
}
