//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=n;i>=1;i=i-2)
	  printf("%d\n",i);
	  return 0;
}
