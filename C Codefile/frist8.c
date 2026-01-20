#include<stdio.h>
int size=0;
int insertItem(int a[]){
    int items;
    printf("Items you want to insert\n");
    scanf("%d",&items);
    for(int i=size;i<size+items;i++){
        scanf("%d",&a[i]);
    }
    size=size+items;
}
int deleteItem(int a[]){

}
int traverse(int a[]){
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main(){
    int arr[500],op;
    while(1){
        printf("Enter Operation you want to perform\n");
        printf("0. Close the program\n");
        printf("1. Insert items\n");
        printf("2. Delete items\n");
        printf("3. Traverse the array\n");
        printf("Enter Operation you want to perform\n");
        scanf("%d",&op);
        switch(op){
        case 1:insertItem(arr);
            break;
        case 2:deleteItem(arr);
            break;
        case 3:traverse(arr);
            break;
        case 0:return 0;
            break;
        default:printf("Enter Correct Operation value\n");
        }
    }
    return 0;
}
