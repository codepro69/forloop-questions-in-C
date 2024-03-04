#include<stdio.h>
int main(){
    int n;
    printf("Enter the last number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        printf("%d ",i);
    }
    printf("\n The sum of the numbers is: %d",sum);
    return 0;
}