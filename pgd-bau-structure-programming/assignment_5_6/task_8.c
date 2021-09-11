//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
int checkCharacter(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("'%c' is Consonant.", ch);
    }
    else {
        printf("'%c' is not an alphabet.", ch);
    }
}
int main()
{
    char ch;
    printf("Enter the character \n ");
    scanf("%c", &ch);
    checkCharacter(ch);
    return 0;
}