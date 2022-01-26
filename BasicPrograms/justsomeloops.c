#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter number for multiplication table\n");
   scanf("%d",&x);
   printf("Enter the number of multiples to be printed\n");
   scanf("%d", &z);
   printf("OK! Here we Go:\nThe Multiplication table for %d:\n",x);
   if(z<0)
   {
   	for(y=-1;y>=z;y--)
     	printf("%d x %d = %d\n",x,y,x*y);
    }
    else if (z>0)
    {
   	for(y=0;y<=z;y++)
     	printf("%d x %d = %d\n",x,y,x*y);
    }
    else
    printf("0");
    return 0;
}
