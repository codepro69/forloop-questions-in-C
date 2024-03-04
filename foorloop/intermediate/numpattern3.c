#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rowa: ");
    scanf("%d",&r);
    int k=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}