#include<stdio.h>
int main(){
    float a,b,c;
    char op;
    while(1){
        printf("Enter Operation\n");
        printf("1. + for addition\n");
        printf("2. - for subtraction\n");
        printf("3. * for multiplication\n");
        printf("4. / for division\n");
        printf("5. 0(zero) for close the program\n");
        scanf("%c",&op);
        printf("Enter a and b\n");
        scanf("%f%f",&a,&b);
        switch(op){
            case '+':c=a+b;
                    break;
            case '-':c=a-b;
                    break;
            case '*':c=a*b;
                    break;
            case '/':c=a/b;
                    break;
            case '0':return 0;
                    break;
            default:printf("Enter correct operation\n");
        }
        printf("Result:%f\n",c);
        getchar();
    }
    return 0;
}
