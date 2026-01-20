//wap to check if a student passed or faild.
//  marks>30 is pass     marks<=30 is fail
#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks(0-100) :");
    scanf("%d",&marks);


    // if(marks <= 30)
    // {
    //     printf("fail\n");
    // }
    // else  if(marks >30 && marks <=100)
    // {
    //     printf("pass\n");
    // }
    //   else
    //   {
    //      printf("wrong marks");
    //   }

       
       marks <=30 ? printf("fail\n"): printf("pass\n");
    return 0;
}