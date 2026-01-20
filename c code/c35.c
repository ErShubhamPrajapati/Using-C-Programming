//print the sum of frist n natural numbers..
#include<stdio.h>
int main()
{
  int n;
  printf("enter number :");
  scanf("%d",&n);
  
  int sum = 0;
 for(int j=n;  j>=1; j--)
 {
    sum = sum + j;
    printf("%d\n",j);
 }
   printf("sum is %d", sum); 

    //  for (int i=n; i>=1; i--)
    //  {
    //     printf("%d\n",i);
    //  }
     


      return 0;
}