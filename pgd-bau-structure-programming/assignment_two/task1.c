#include <stdio.h>
int addNumber(int numOne, int numTwo){
    int result=numOne+numTwo;
    return result;
}
int main() {
    int numOne;
    int numTwo;
    
    printf("Please Enter the first number \n");
    scanf("%d",&numOne);
    
    printf("Please Enter the second number \n");
    scanf("%d",&numTwo);
    
    int sumResult=addNumber(numOne,numTwo);
    printf("Result is : %d",sumResult);
    
    return 0;
}