//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>
int checkAlphabet(char ch){
    if(ch>='A' && ch<='Z'){
        printf("'%c' is uppercase alphabet.", ch);
    }else if(ch>='a' && ch<='z'){
        printf("'%c' is lowercase alphabet.", ch);
    }else{
        printf("'%c' is not an alphabet.", ch);
    }
}
int main()
{
    char ch;
    printf("Enter the character \n ");
    scanf("%c", &ch);
    checkAlphabet(ch);
    return 0;
}