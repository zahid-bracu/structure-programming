//Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int checkNumber(int num){
    if (num<=0) {
        if (num==0)
            printf("You entered 0");
        else
            printf("negative number.");
    } else
        printf("positive number.");
}
int main() {
    int num;
    printf("Enter the number \n ");
    scanf("%d", &num);
    checkNumber(num);
    return 0;
}