#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("i=%d\n",i);
		if(i==5)
			break;
	}
	printf("outside the loop");
}
