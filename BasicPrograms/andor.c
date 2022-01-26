#include<stdio.h>
int main()
{
  char g;
  int a,q;
  printf("Enter your Gender & Age\n");
  scanf("%c,%d",&g,&a);
  if ((g=='M'||g=='m')&&(a<=18&&a>=27))
    printf("ENJOY LIFE\n");
  else if ((g=='F'||g=='f')&&(a<=18&&a>=27))
      printf("ENJOYYYYYYY\n");
  else
        printf("YOU ARE UNFORTUNATE!!!\n");
        return 0;
}
