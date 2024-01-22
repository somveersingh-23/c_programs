#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

int main()
{
    int *arr, n;
    int num, i;
    bool f;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    arr = (int*)calloc(n,sizeof(int));
    printf("\nEnter the %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }

    printf("\nEnter the searching items:\n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("\nItem found at index :%d\n", i + 1);
            f = true;
            break;
        }
        else
        {
            f = false;
        }
    }
    if (f == false)
    {
        printf("Item not found:!");
    }

    return 0;
}