#include <stdio.h>
int checkTriangle(int sideOne, int sideTwo, int sideThree){
    if(((sideOne + sideTwo) > sideThree) && ((sideTwo + sideThree) > sideOne) && ((sideOne + sideThree) > sideTwo) ){
        printf("Triangle is valid.");
    }else{
        printf("Triangle is not valid.");
    }
}
int main(){
    int sideOne;
    int sideTwo;
    int sideThree;
    printf("Enter the first side \n");
    scanf("%d",&sideOne);
    printf("Enter the Second side \n");
    scanf("%d",&sideTwo);
    printf("Enter the Third side \n");
    scanf("%d",&sideThree);
    checkTriangle(sideOne, sideTwo, sideThree);
    return 0;
}