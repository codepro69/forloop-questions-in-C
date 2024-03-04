#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        if(n%i==0){
            printf("%d ",i);
    }
    }
    printf("\n");
    for(int i=1;i<=n;++i){
        if(n%i==0&&i%2!=0){
            printf("%d ",i);
        }
        else if(n%i==0&&i%2==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    for(int i=1;i<=n;++i){
        if(n%i==0&&i%2==0){
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
}