#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int p,q;
    for(int i=0;i<=r;i++){
        if(i%2==0){
            p=1;
            q=0;
        }
        else{
            p=1;
            q=0;
        }
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("%d",p);
            }
            else{
                printf("%d",q);
            }
        }
        printf("\n");
    }
    return 0;
}