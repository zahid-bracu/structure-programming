#include <stdio.h>
#include <math.h>
int main(){
    float sideOne,sideTwo,sideThree;
    printf("Enter  Side One Value \n");
    scanf("%f",&sideOne);
    
    printf("Enter  Side Two Value \n");
    scanf("%f",&sideTwo);
    
    printf("Enter  Side Three Value \n");
    scanf("%f",&sideThree);
    
    float s=(sideOne+sideTwo+sideThree)/2.0;
    float area=sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
    float perimeter=sideOne+sideTwo+sideThree;
    printf("Perimeter %f \n",perimeter);
    printf("Area %f \n",area);
    return 0;
}