//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
int checkAlphabet(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("'%c' is digit.", ch);
    }
    else{
        printf("'%c' is special character.", ch);
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