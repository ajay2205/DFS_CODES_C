#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
    int result = 1;
    for (int i = 1; i <= num; i++){
        result = result * i; 
    }
    return result;
}


int main()
{
    int num;
    printf("Enter the number to find the factorial : ");
    scanf("%d", &num);
    printf("%d",factorial(num));
}