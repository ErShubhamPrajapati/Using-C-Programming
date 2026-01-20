#include<stdio.h>
#include<conio.h>
int main()
{
int a=10,b=20,res,n;
start:
res=a+b;
printf("Result= %d",res);
printf("Enter 1 to continue");
scanf("%d",&n);
if(n==1)
goto start;
}
