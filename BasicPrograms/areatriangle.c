#include<stdio.h>
int calarea(int b,int h)
{
  int area;
  area=0.5*b*h;
  return(area);
}

void main()
{
  int b,h,call,area;
  printf("Enter base, height\n");
  scanf("%d %d",&b,&h);
  area=calarea(b,h);
  printf("Area = %d\n",area);
}
