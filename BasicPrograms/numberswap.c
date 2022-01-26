#include <stdio.h>  
void valueswap(int , int); //swap by value
void swap(int *, int *); //swap by reference
int main()  
{  
	int a = 10;  
	int b = 20;   
	printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
	swap(a,b);  
	printf("After swapping with call by value in main a = %d, b = %d\n",a,b);
	referenceswap(a,b);
	printf("After swapping with call by reference in main a = %d, b = %d\n",a,b);
}
  
void valueswap (int a, int b)  
{  
	int temp;   
	temp = a;  
	a=b;  
	b=temp;  
	printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10   
}  
    
void referenceswap (int *a, int *b)  
{  
	int temp;   
	temp = *a;  
	*a=*b;  
	*b=temp;  
	printf("After swapping values in function a = %d, b = %d\n",*a,*b); // Formal parameters, a = 20, b = 10   
}  
