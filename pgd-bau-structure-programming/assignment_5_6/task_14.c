#include <stdio.h>
int checkTriangle(int sum, int angleOne, int angleTwo, int angleThree){
    if(sum==180 && angleOne>0 && angleTwo>0 && angleThree>0) {
        printf("Triangle is valid.");
    }else{
        printf("Triangle is not valid.");
    }
}
int main(){
    int angleOne;
    int angleTwo;
    int angleThree;
    int sum;
    printf("Enter first angle of triangle: \n");
    scanf("%d",&angleOne);
    printf("Enter second angle of triangle: \n");
    scanf("%d",&angleTwo);
    printf("Enter third  angle of triangle: \n");
    scanf("%d",&angleThree);
    sum = angleOne+angleTwo+angleThree; 
    checkTriangle(sum,angleOne,angleTwo,angleThree);
    return 0;
}