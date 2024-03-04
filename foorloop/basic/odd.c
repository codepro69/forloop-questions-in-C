#include<stdio.h>
int main(){
    int n;
    printf("Enter the range of number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\nThe sum of odd natural number upto %d term is: %d",n,sum);
    return 0;
}