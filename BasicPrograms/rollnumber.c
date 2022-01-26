/*Programme to find the Roll Number of a student
  By: The Hacker
  21.03.2021
*/

#include<stdio.h>
#include<string.h>
int main()
{
  char d[10];
  int r;
  printf("Hello! Let's find out your roll number LOL!\n");
  
  printf("Enter your Department: ");
  fgets(d);
  
  printf("Enter your new roll number in 3 digit format: ");
  scanf("%d",&r);
  
  puts(d);
  
  if(d==CSE)
  printf("Your Roll Number is: 320126510%d\n",r);
  else if(d==ECE)
  printf("Your Roll Number is: 320126512%d\n",r);
  else if(d==IT)
  printf("Your Roll Number is: 320126511%d\n",r);
  else if(d==EEE)
  printf("Your Roll Number is: 320126514%d\n",r);
  else if(d==Mechanical)
  printf("Your Roll Number is: 320126520%d\n",r);
  else if(d==Chemical)
  printf("Your Roll Number is: 320126502%d\n",r);
  else if(d==CSM)
  printf("Your Roll Number is: 320126552%d\n",r);
  else if(d==CSD)
  printf("Your Roll Number is: 320126551%d\n",r);
  else if(d==Civil)
  printf("Your Roll Number is: 320126508%d\n",r);
  
  
  else
  printf("Something went wrong :( Please Check Again\n");
  
  return 0;
}

