//C program to print all natural numbers from 1 to n
#include <stdio.h>
int forLoop(n){
    int i;
    for(i=1; i<=n; i++){
        printf("%d\n", i);
    }
}
int main(){
    int n;
    printf("Enter the value of na \n");
    scanf("%d", &n);
    forLoop(n);
    return 0;
}