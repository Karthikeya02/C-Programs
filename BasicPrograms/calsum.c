#include<stdio.h>
int calsum();
void main()
{
  int a,b,c,sum;
  printf("Enter three numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  sum= calsum(a,b,c);
  printf("Sum=%d\n",sum);
}

int calsum(int x, int y, int z)
{
  int s;
  s=x+y+z;
  return(s);
}
