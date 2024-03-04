/*#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Input any 10 numbers: \n");
    for(i=0;i<=10;i++){
        printf("Number-%d :",i);
        scanf("%d",&n);
        sum+=n;
    }
    float avg=sum/10.0;
    printf("The sum of 10 numbers is: %d\nThe average of the 10 numbers is: %f\n",sum,avg);
    return 0;
}*/
#include <stdio.h>  // Include the standard input/output header file.
int main() {
    int i, n, sum = 0;  // Declare variables 'i' for loop counter, 'n' for user input, 'sum' to store the sum.
    float avg;  // Declare variable 'avg' to store the average.

    printf("Input the 10 numbers : \n");  // Print a message to prompt user input.

    for (i = 1; i <= 10; i++) {  // Start a for loop to iterate 10 times.
        printf("Number-%d :", i);  // Print a message to indicate which number is being input.

        scanf("%d", &n);  // Read the value of 'n' from the user.
        sum += n;  // Add the value of 'n' to the running sum.
    }

    avg = sum / 10.0;  // Calculate the average.

    printf("The sum of 10 no is : %d\nThe Average is : %f\n", sum, avg);  // Print the sum and average.
    return 0;
}