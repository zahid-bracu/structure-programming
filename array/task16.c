
// Reverse Array
#include <stdio.h>
int main() {
    int array[]={11,22,33,44,55,66,77,88};
    int arraySize= sizeof(array)/sizeof(array[0]);
    int reverseArray[arraySize];
    int j=arraySize-1;
    for(int i=0;i<arraySize;i++){
        reverseArray[i]=array[j--];
    }

    for(int i=0;i<arraySize;i++){
        printf("%d \n",reverseArray[i]);
    }
    return 0;
}
