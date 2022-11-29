// Take a single character  as input, you may benefit from scanf("%c", &ch ); and print("%c", ch) to print the character. 
// Write a program to print the ASCII value of the given character.

#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}
