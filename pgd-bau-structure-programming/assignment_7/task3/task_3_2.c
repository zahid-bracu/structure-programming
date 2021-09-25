//C program to print all alphabets from a to z
#include <stdio.h>
int loop(){
    char ch='a';
    while(ch<='z'){
        printf("%c ", ch);
        ch++;
    }
}
int main(){
    loop();
    return 0;
}