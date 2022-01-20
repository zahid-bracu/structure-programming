//Write a C program to put even and odd elements of an array in two separate arrays.
#include <stdio.h>
int main() {
    int array[]={11,22,33,44,55,66,77,88,21,23,44,54,32,32,54,11,23,65};
    int oddCount=0;
    int evenCount=0;
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]%2==0)
            evenCount++;
        else
            oddCount++;
    }

    int oddArray[oddCount];
    int evenArray[evenCount];

    int evenItr=0;
    int oddItr=0;
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]%2==0)
            evenArray[evenItr++]=array[i];
        else
            oddArray[oddItr++]=array[i];
    }

    printf("Even List :\n");
    for(int i=0;i<sizeof(evenArray)/sizeof(evenArray[0]);i++){
         printf("%d ",evenArray[i]);
    }

    printf("\nOdd List :\n");
    for(int i=0;i<sizeof(oddArray)/sizeof(oddArray[0]);i++){
         printf("%d ",oddArray[i]);
    }

    return 0;
}
