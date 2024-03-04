#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(int i=0;i<=r;i++){
        for(int k=1;k<=r-1;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
            {printf("*");
        }
        printf("\n");
    }
    for(int i=r-1;i>=1;i--){
        for(int k=1;k<=r-1;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
