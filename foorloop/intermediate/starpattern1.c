#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows to print: ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}