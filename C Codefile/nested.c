//wap to find division of a user
#include<stdio.h>
#include<conio.h>
int main()
{
	int per;
	printf("enter your percentage");
	scanf("%d",&per);
	if(per>=80 && per<=100)//outer if
	{
	   if (per>=90)//inner if
	   {
	   	    printf("super you topped the university");
	   }
	   else
	   {
	   	    printf("congratulations passed with honors");
		}
	}
	else if(per>=60 && per<=79)
	   {
	     printf("very good Frist division");	
	   }
	else if(per>=45 && per<=59)
	   {
		printf("good second division");
	   }
}
