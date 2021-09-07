//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int checkNumber(int num){
    if((num%5==0) && (num%11==0)){
        printf("Number is divisible by 5 and 11");
    }else{
        printf("Number is not divisible by 5 and 11");
    }
}
int main()
{
    int num;
    printf("Enter the number \n ");
    scanf("%d", &num);
    checkNumber(num);
    return 0;
}