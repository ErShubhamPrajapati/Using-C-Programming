//wap to check a given number is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,rem;
	printf("enter a number");
	scanf("%d",&a);
	rem=a%2;
	if(rem==0)
	{
	  printf("number is a even number");
	  printf("\n byee");
	}
	else
	{
		printf("number is a odd number");
	}
}
