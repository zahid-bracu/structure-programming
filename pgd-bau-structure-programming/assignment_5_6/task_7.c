//Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
int checkChar(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("The entered character %c is an Alphabet",ch);
    else
        printf("The entered character %c is not an Alphabet",ch);
}
int main()
{
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    checkChar(ch);
    return 0;
}