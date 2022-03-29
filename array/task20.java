//write a java program to sort odd and even element in two different array
package array_problems;

public class task20{
    public static void Bubble_Sort(int array[]){
        for(int i=0;i<array.length;i++){
            for(int j=i+i;j<array.length;j++){
                if(array[i]>array[j]){
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
    }
    public static void PrintArray(int array[]){
        for(int i=0;i<array.length;i++){
            System.out.println(array[i]);
        }
    }
    public static void main(String [] args){
        int array[]={11,522,33,442,55,166,977,88,299,110};
        int oddCount=0;
        int evenCount=0;
        for(int i=0;i<array.length;i++){
            if(array[i]%2==0)
                evenCount++;
            else
                oddCount++;
        }
        int oddArray[]=new int[oddCount];
        int evenArray[]=new int[evenCount];
        int e=0;
        int o=0;
        for(int i=0;i<array.length;i++){
            if(array[i]%2==0)
                evenArray[e++]=array[i];
            else
                oddArray[o++]=array[i];
        }
        Bubble_Sort(evenArray);
        Bubble_Sort(oddArray);
        PrintArray(evenArray);
        PrintArray(oddArray);
        
    }
}