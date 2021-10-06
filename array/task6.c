 //Write a C program to count the total number of even and odd elements in an array.
#include <stdio.h>
int main(){
    int array[10]={11,22,33,44,55,66,77,88,99,110};
    int arraySize=sizeof(array)/sizeof(array[0]);
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<arraySize;i++){
        if(array[i]%2==0)
            evenCount++;
        else
            oddCount++;
    }
    
    printf("Even Number : %d\n",evenCount);
    printf("Odd Number : %d\n",oddCount);
}