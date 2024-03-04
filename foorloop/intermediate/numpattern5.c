#include <stdio.h>
int main(){
    int r,spc,t=1,k;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    spc=r+4-1;
    for(int i=1;i<=r;i++){
        for(k=spc;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
        spc--;
    }
    return 0;
}