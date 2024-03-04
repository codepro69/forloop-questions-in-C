#include <stdio.h>
int main(){
   float x;
   printf("Enter the value of x: ");
   scanf("%f",&x);
   int n;
   printf("Enter the range of terms: ");
   scanf("%d",&n);
   float sum,t,d;
   sum=1;
   t=1;
   for (int i=1;i<n;i++){
    d=(2*i)*(2*i-1);
    t=-t*x*x/d;
    sum+=t;
   }
   printf("\nThe sum= %f\nNumber of terms= %d\nValue of x= %f\n",sum,n,x);
   return 0;
}