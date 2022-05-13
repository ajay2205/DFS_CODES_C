#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[],int length)
{
    int i;//unsorted
    int j;//sorted
    
    for(i = 1; i < length; i++){
        j = i-1;
        int temp = arr[i];//storing unsorted element in temp

        while (j >= 0 && arr[j] > temp )//shifting towards right
        {
            arr[j+1] = arr[j];//shifting sorted 
            j--; 
        }
        arr[j+1] = temp;//making unsorted element as sorted
    }
}


int main()
{
    int i;
    int arr[] = {2,6,1,5,45,21,32};
    
    int length = sizeof(arr)/4;//use sizeof() in main function and not in user defined function.

    insertion_sort(arr,length);

    for(i = 0; i < length; i++){
        printf("%d \t" , arr[i]);
    }
}
