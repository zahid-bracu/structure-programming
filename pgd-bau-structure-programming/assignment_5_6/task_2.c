//Write a C program to find maximum between three numbers.
#include <stdio.h>
int main() {
    int numOne, numTwo, numThree;
    printf("Enter The First Number \n");
    scanf("%d",&numOne);
    printf("Enter The Second Number \n");
    scanf("%d",&numTwo);
    printf("Enter The Third Number \n");
    scanf("%d",&numThree);
    if(numOne>numTwo && numOne>numThree){
        printf("%d is greater",numOne);
    }else if(numTwo>numOne && numTwo>numThree){
        printf("%d is greater",numTwo);
    }else{
        printf("%d is greater",numThree);
    }
    return 0;
}