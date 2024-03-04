#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum=0;
    printf("The positive divisor are: ");
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
            printf("%d ",i);
        }
    }
    printf("\nThe sum of positive divisior is: %d\n",sum);
        if (sum==n){
            printf("\nThe number is a perfect Number.");
        }
        else{
            printf("\nSo,the number is not perfect number.");
        }

    return 0;

}