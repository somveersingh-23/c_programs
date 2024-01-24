#include <stdio.h>
int main()
{
    int arr[100], n, i, j;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("\nEnter the %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1;i<=n-1;i++){
        for(j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    printf("\nSorted array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}