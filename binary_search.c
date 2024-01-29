#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void main(){
    int *arr,n,i,num;
    int lr=0,up,mid;
    bool f;

    printf("Enter the size for array:\n");
    scanf("%d",&n);
    arr = (int*)calloc(n,sizeof(int));
    printf("\nEnter the items in the array:\n");
    for (i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the searching element:\n");
    scanf("%d",&num);
    up = n-1;
    mid = (lr+up)/2;
    while(lr<=up){
        
        if(arr[mid]==num){
            f = true;
            break;
        }
        if(arr[mid]<num){
            lr = mid+1;
        }
        else{
            up = mid-1;
        }
        mid = (lr+up)/2;
    }
    if(f==true){
        printf("\nItem found at index:%d\n ",mid+1);
    }
    else{
        printf("\nItem not found !:");
    }
    
}