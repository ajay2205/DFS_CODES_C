#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
    if (num == 0) //base condition
    {
        return 1;
    }
    
    int small_ans = factorial(num-1);
    return num * small_ans;
    }

int main()
{
    int num;
    printf("Enter the number to find the factorial : ");
    scanf("%d", &num);
    printf("%d",factorial(num));
}