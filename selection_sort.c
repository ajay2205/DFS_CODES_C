#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int length){
    int i;
    int j;
        //there will be n-1 rounds 0 to length-2
        for (i = 0; i < length-1; i++) {
            int min = arr[i];
            int currentMinIndex = i;

            for (j = i+1; j < length-1; j++) {//for checking the minimum in the complete array
                if (arr[j] < min){
                    min = arr[j];
                    currentMinIndex =j;
                }
            }

            //swapping
            int temp = arr[i];
            arr[i] = min;
            arr[currentMinIndex] = temp;
        }
    }

int main(){
        int arr[] = {3,1,4,2,6,9};

        int length = sizeof(arr)/4;
        
        selection_sort(arr,length);

        int i;
        for(i = 0; i < length; i++){
        printf("%d \t" , arr[i]);
    }
}
