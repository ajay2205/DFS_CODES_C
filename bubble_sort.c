#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[],int length)
{
    int i;
    int j;
    
    for(i =0; i < length; i++){
        for(j = 0; j<length-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main()
{
    int i;
    int arr[] = {2,6,1,5,45,21,32};
    
    int length = sizeof(arr)/4;//use sizeof() in main function and not in user defined function.

    bubble_sort(arr,length);

    for(i = 0; i < length; i++){
        printf("%d \t" , arr[i]);
    }
}
