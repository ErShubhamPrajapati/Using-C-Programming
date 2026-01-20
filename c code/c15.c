#include<stdio.h>
#include<math.h>
int main()
{
    printf("%d\n", 3>4 && 5>2); //AND(&&),OR(||),NOT(!)
    printf("%d\n",3>4 || 5>2);
    printf("%d\n",!(5>3) && (3>4));
    return 0;
}