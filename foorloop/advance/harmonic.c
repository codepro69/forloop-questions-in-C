#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    float sum=0.0;
    for(float i=1;i<=n;i++){
        sum+=1/i;
    }
    printf("Sum of Series upto %d terms: %f\n",n,sum);
    return 0;
}