#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int spc,t=1,k;
    spc=r+4-1;
    for(int i=1;i<=r;i++){
        for(k=spc;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
        spc--;
    }
    return 0;
}