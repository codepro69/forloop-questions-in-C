#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the range of number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=2*i;
    }
    printf("\nThe Sum of even natural number upto %d terms is: %d",n,sum);
    return 0;
}