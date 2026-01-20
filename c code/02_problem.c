#include<stdio.h>
int main()
{
int n
print("enter n:");
scan("%d",&n);

if (n>=0)
{
 printf("number is positive\n");
   if(n % 2==0)
   {
    print("even number\n");
   }
   else
   {
    printf("odd number\n");
   }
}
else
{
 printf("nuber is negative\n");
 if(n % 2==0)
   {
    printf("even number\n");
   }
   else
   {
    printf("odd number\n");
   }
}

return 0;
}
