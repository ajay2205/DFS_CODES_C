#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){
    if (num == 1)
    {
        return 0;
    }
    else if (num == 1 || num ==2 )
    {
        return 1;
    }
    

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