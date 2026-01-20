#include<stdio.h>
int size=0;
int main(){
    int arr[100],item,op;
    while(1){
    printf("Enter operation you want to perform\n");
    printf("1. Insertion\n");
    printf("2. Traversing\n");
    printf("0. Exit\n");
    scanf("%d",&op);
    switch(op){
        case 1:printf("Enter item that you want to add\n");
                scanf("%d",&item);
                arr[size]=item;
                size=size+1;
                break;
        case 2:printf("Current Array\n");
                for(int i=0;i<size;i++){
                    printf("%d\t",arr[i]);
                }
                printf("\n");
                break;
        case 0:return 0;
                break;
        default:printf("Enter Correct operation\n");
    }
}
    return 0;
}
