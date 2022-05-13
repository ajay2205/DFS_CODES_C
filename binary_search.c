#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[],int length, int key)
{
    int start = 0;
    int end = length-1;

    while (start < end){
        int mid = (start+end)/2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }   
    }
    return -1;
}


int main()
{
    int arr[] = {1,3,5,6,7,8,10,13};//array must be sorted
    
    int length = sizeof(arr)/4;

    int key;
    printf("enter the value you want to search in the array : ");
    scanf("%d", &key);

    int element_index = binary_search(arr,length,key);
    if (element_index == -1)
    {
        printf("element not found");
    }
    else{
    printf("element found at index %d",element_index);
    }
}