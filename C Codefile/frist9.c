#include <stdio.h>
int main()
{
	int a = 234;
	float b = 1.1;
	char c = 'a';
	
	int *ptr;
	float *floatptr;
	char *charptr;
	
	ptr = &a;
	floatptr = &b;
	charptr = &c;
	
	printf("Printing values present inside pointer variables\n%d\n%d\n%d\n",ptr,floatptr,charptr);
	
	printf("Printing actual values\n%d\n%d\n%d\n",ptr,charptr,floatptr);
				
	
}
