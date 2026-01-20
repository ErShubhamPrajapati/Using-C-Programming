//wap to print month name based on the month number
#include<stdio.h>
#include<conio.h>
 int main()
{
	int mn;
	printf("enter current month number");
	scanf("%d",&mn);
	switch(mn)
	{
		case 1:
		printf("January");
		  break;
        case 2:
        printf("February");
          break;
          case 3:
		printf("March");
		  break;
		  case 4:
		printf("April");
		  break;
		  case 5:
		printf("May");
		  break;
		  case 6:
		printf("June");
		  break;
		  case 7:
		printf("July");
		  break;
		  case 8:
		printf("August");
		  break;
		  case 9:
		printf("September");
		  break;
		  case 10:
		printf("October");
		  break;
		  case 11:
		printf("November");
		  break;
		  case 12:
		printf("December");
		  break;
		  default:
		  	printf("invalid month number");
		  	 break;
	}
}
