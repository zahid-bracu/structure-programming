// Write a C program to find maximum between two numbers.
#include <stdio.h>

int main() {
    int numOne, numTwo;
    printf("Enter The First Number \n");
    scanf("%d",&numOne);
    printf("Enter The Second Number \n");
    scanf("%d",&numTwo);
    if(numOne>numTwo){
        printf("%d is greater",numOne);
    }else{
        printf("%d is greater",numTwo);
    }
    return 0;
}