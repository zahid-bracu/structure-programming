#include <stdio.h>
int main()  
{  
    int angleOne; 
    int angleTwo; 
    int angleThree;  
    printf("Enter the first angel \n");  
    scanf("%d", &angleOne);
    printf("Enter the second angel \n");  
    scanf("%d", &angleTwo);
    angleThree = 180 - (angleOne + angleTwo);   
    printf("Third angle is  %d", angleThree);  
    return 0;  
}  