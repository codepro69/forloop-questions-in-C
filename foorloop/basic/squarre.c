#include <stdio.h>
int main(){
    int n;
    printf("Enter the range of the number  : ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        int square=i*i;
        printf("Number-%d square is: %d\n",i,square);
        sum+=square;
        

    }
    printf("The sum of sqaure Natural number upto %d terms = %d\n",n,sum);
        return 0;
}