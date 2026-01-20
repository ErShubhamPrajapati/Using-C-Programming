#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;j<100;i++)
  {
  for(j=1;j<100;j++)
  {
  printf("%d",i*j);
  printf("\t");
}
printf("\n");
}
return 0;
}
