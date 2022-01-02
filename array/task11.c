//Write a C program to count the frequency of each element in an array.
#include <stdio.h>
int main()
{
    int array[10]={1,2,2,3,1,5,1,6,8,4};
    int frq[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<10;i++){
        frq[array[i]]++;
    }
    
    for(int j=0;j<10;j++){
        printf("%d is presented in array %d times \n",j,frq[j]);
    }
    return 0;
}
