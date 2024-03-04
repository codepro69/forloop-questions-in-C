/*#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows to print: ");
    scanf("%d",&r);
    for(int i=0;i<=r;i++){
        for(int j=0;j<2*(r-i)-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
    }
    printf("\n");
    return 0;
}*/
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
