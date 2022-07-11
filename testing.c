#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    int elements;
    printf("enter the elements you want :");
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        printf("enter the elements :");
        scanf("%d", &elements);
    }

    return 0;
}
