//Write a C program to find maximum between two numbers
#include <stdio.h>
int checkGreater(int numOne,int numTwo){
    if(numOne > numTwo){
        printf("%d is maximum", numOne);        
    }else if(numTwo > numOne){
        printf("%d is maximum", numTwo);
    }else{
        printf("Both are equal");
    }
}
int main()
{
    int num1, num2;
    printf("Enter first number please \n ");
    scanf("%d", &num1);
    printf("Enter second number please \n ");
    scanf("%d", &num2);
    checkGreater(num1,num2);
    return 0;
}