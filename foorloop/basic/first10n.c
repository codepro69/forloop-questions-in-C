#include <stdio.h>
int main(){
    int n;
    printf("enter the last num: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}