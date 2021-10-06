//07. Write a C program to count the total number of negative elements in an array.
#include <stdio.h>
int main(){
    int array[10]={11,-22,33,44,-55,-66,77,88,-99,110};
    int arraySize=sizeof(array)/sizeof(array[0]);
    int negativeCount=0;
    
    for(int i=0;i<arraySize;i++){
        if(array[i]<0)
            negativeCount++;
    }
    printf("Negative Number Count : %d\n",negativeCount);
}