#include<stdio.h>
 int main()
{
	int num;
	printf("Enter an integer = ");
	scanf("%d",&num);
	
	(num%2==0)? printf("This number is even",num): printf("This number is odd",num);
	return 0;
}