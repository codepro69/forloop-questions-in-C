#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to check the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
            if(i%2==0){
                printf("the number is prime");
            }
            else{
                printf("the number is not prime");
            }
        }
    }
    return 0;
}