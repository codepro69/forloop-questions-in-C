#include <stdio.h>
int main(){
    int n;
    long int sum=0;
    long int t=1;
    printf("Enter the range of series: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%ld ",t);
        if(i<n){
            printf("+ ");
        }
        sum+=t;
        t=(t*10)+1;
    }
    printf("\nThe sum is: %ld\n",sum);
    return 0;
}