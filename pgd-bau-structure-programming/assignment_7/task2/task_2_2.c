//C program to all natural numbers in reverse from n to 1
#include <stdio.h>
int forLoop(int start){
    int i=start; 
    while(i>=1){
        printf("%d\n", i);
        i--;
    }
}
int main(){
    int start;
    printf("Enter The Start Value \n");
    scanf("%d", &start);
    forLoop(start);
    return 0;
}