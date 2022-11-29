// Take a single character  as input, you may benefit from scanf("%c", &ch ); and print("%c", ch) to print the character. 
// Write a program to print the ASCII value of the given character.

#include <stdio.h>
#include <stdlib.h>
int main(){
    char ch;
    printf("Bir karakter giriniz: ");
    scanf("%c",&ch);
    printf("Girilen degerin ASCII karsiligi %c = %d",ch,ch);
    return 0;
}
