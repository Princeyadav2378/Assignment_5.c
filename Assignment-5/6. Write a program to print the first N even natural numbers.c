//6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	  printf("%d\n",i);
	  return 0;
}
