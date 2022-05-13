#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linear_search(int arr[], int length, int key)
{
    int i;
    for(i = 0; i<length; i++){
        if(arr[i] == key ){
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {1,5,12,14,76,32,54,2,15};
    int key;
    printf("enter the value you want to search in the array : ");
    scanf("%d", &key);

    printf("%d",linear_search(arr, sizeof(arr)/4, key));
}
