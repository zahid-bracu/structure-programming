#include <stdio.h>
float getPerim(float length, float breadth){
    float perim=2*(length+breadth);
    return perim;
}
int main() {
    float length;
    float breadth;
    printf("Please Enter the length \n");
    scanf("%f",&length);
    printf("Please Enter the breadth \n");
    scanf("%f",&breadth);
    float perim=getPerim(length,breadth);
    printf("Area is : %f" , perim);
    return 0;
}