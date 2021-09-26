//C program to print all alphabets from a to z
#include <stdio.h>
int loop(){
    char ch='a';
    do{
        printf("%c ", ch);
        ch++;
    }while(ch<='z');
}
int main(){
    loop();
    return 0;
}