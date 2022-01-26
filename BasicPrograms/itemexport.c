#include<stdio.h>
int main()
{
 int a[5][5],i,j;
 printf("Enter the items exported between 1995-96\n");
 for(i=0;i<5;i++)
 {scanf("%d",&a[0][i]);}
 printf("Enter the items exported between 1996-97\n");
 for(i=0;i<5;i++)
 {scanf("%d",&a[1][i]);}
 printf("Enter the items exported between 1997-98\n");
 for(i=0;i<5;i++)
 {scanf("%d",&a[2][i]);}
 printf("Enter the items exported between 1998-99\n");
 for(i=0;i<5;i++)
 {scanf("%d",&a[3][i]);}
 printf("Enter the items exported between 1999-2000\n");
 for(i=0;i<5;i++)
 {scanf("%d",&a[4][i]);}
 
 printf("Year|Item	Item1	Item2	Item3	Item4	Item5\n");
 printf("1995-96\t	%d	%d	%d	%d	%d\n",a[0][0],a[0][1],a[0][2],a[0][3],a[0][4]);
 printf("1996-97\t	%d	%d	%d	%d	%d\n",a[1][0],a[1][1],a[1][2],a[1][3],a[1][4]);
 printf("1997-98\t	%d	%d	%d	%d	%d\n",a[2][0],a[2][1],a[2][2],a[2][3],a[2][4]);
 printf("1998-99\t	%d	%d	%d	%d	%d\n",a[3][0],a[3][1],a[3][2],a[3][3],a[3][4]);
 printf("1999-00\t	%d	%d	%d	%d	%d\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
 
 
 return 0;
 }
