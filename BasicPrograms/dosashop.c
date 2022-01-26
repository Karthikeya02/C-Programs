#include<stdio.h>
int main()
{
  int n,i,d[100],dv,cn,c[3],s=0;
  char Y;
  printf("Enter the number of Dosas:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {printf("Enter the number corresponding to the dosa-%d:\n 1 = Plain Dosa\n 2 = Onion Dosa\n 3 = Masala Dosa\n 4 = Ghee Rava Dosa\n",i+1);
   {scanf("%d",&d[i]);}
   printf("Additional chutney required?(Y/N)\n");
   scanf("%c",&Y);}
   if(Y==Y)
   printf("Enter the number of Chutney(s) [MAX=3]:");
   scanf("%d",&cn);
   printf("Enter the number(s) corresponding to the Chutney(s):\n 1 = Onion Chutney\n 2 = Tomato Chutney\n 3 = Ginger Chutney\n 4 = Peanut Chutney\n 5 = Coriander Chutney\n");
   for(i=0;i<cn;i++)
   {scanf("%d",&c[i]);}
   for(i=0;i<3;i++)
   {
     if(d[i]==1)
     {dv=15;}
     if(d[i]==2)
     {dv=25;}
     if(d[i]==3)
     {dv=35;}
     if(d[i]==4)
     {dv=50;}
     
     s=s+dv+cn*10;
    }
    printf("Order Value=%d\n",s);
    return 0;
    }
