#include <stdio.h>
int main(){
    int n;
    int multi=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        multi=multi*i;
    }
    printf("The factorial of the number %d is %d",n,multi);
    return 0;
}