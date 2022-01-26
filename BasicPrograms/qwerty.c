#include<stdio.h>
int main()
{
  int a,b=1,f;
  printf("Enter the number\n");
  scanf("%d", &a);
  for(f=1;f<=a;f++)
    {
      b=b*f;
    }
    printf("The factorial is %d\n",b);
    return 0;
    }
