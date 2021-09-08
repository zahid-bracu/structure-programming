//Write a C program to check whether a number is even or odd.
#include <stdio.h>
int checkNumber(num){
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
}
int main() {
    int num;
    printf("Enter an integer \n ");
    scanf("%d", &num);
    checkNumber(num);
    return 0;
}