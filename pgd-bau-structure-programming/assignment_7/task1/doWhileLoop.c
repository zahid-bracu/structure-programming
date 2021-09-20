//C program to print all natural numbers from 1 to n
#include <stdio.h>
int forLoop(n){
    int i=1;
    do{
        printf("%d\n", i);
        i++;
    }while(i<=n);
}
int main(){
    int n;
    printf("Enter the value of na \n");
    scanf("%d", &n);
    forLoop(n);
    return 0;
}