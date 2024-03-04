#include <stdio.h>
int main(){
    int n;
    printf("Enter the last number: ");
    scanf("%d",&n);
    int cube=0;
    for(int i=1; i<=n; i++){
        cube=i*i*i;
        printf("Number is: %d and cube of the %d is: %d\n",i,i,cube);
    }
    return 0;
}