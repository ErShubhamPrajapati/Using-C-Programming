#include<stdio.h>
#include<math.h>
int main()
{
	int b,c;
	b = c = 2;
	int a = b = c;
	int power = pow(b,a);
	printf("%d",power);
}
