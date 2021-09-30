//C program to print all even numbers from 1 to n
#include <stdio.h>
int loop(int n){
    int i=1;
    do{
        if(i%2 != 0){
            printf("%d\n", i);
        }
        i++;
    }while(i<=n);
}
int main(){
    int n;
    printf("Enter The Value of N : ");
    scanf("%d", &n);
    loop(n);
    return 0;
}