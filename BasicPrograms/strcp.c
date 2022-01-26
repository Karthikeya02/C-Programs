#include <stdio.h>
char* my_strcpy(char dest[], const char src[]);
int main()
{
char str1[] = "st";
char str2[] = "str1";
printf("%s", my_strcpy(str1, str2));
return 0;
}
char *my_strcpy(char *dest, const char *src)
{
int i;
for (i=0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i]= '\0';
return dest;
}