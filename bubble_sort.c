#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int bubble_sort(int arr[])
{
    int i;
    int j;
    int length = sizeof(arr);
    printf("%d",length);

    for(i =0; i < length-1; i++){
        for(j = 0; j<length; j++){
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
    int arr[] = {8,2,6,1,5};

    bubble_sort(arr);

    for(i = 0; i < sizeof(arr)/4; i++){
        printf("%d" , arr[i]);
    }
}
