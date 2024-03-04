#include <stdio.h>

int main() {
    int num_chars;
    printf("Enter the number of characters in the pattern: ");
    scanf("%d", &num_chars);

    char ch = 'a'; // Start with 'a'
    
    // Loop to print the pattern
    for(int i = 0; i <= num_chars; i++) {
        if(i % 2 == 0)
            printf("%c", ch); // Print lowercase character
        else
            printf("%c", ch - 32); // Print corresponding uppercase character
        ch++; // Move to the next character
    }
    
    return 0;
}
