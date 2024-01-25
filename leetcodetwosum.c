#include<stdio.h>
#include<stdlib.h>

int *twosum(int num[],int size,int target, int *ind1, int *ind2){
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(num[i]+num[j]==target){
            *ind1 = i;
            *ind2 = j;
            return num;
            }
        }
    }
    *ind1 = -1;
    *ind2=-1;
}

int main(){
    int *arr,size,target,ind1,ind2;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    arr = (int*)malloc(size*sizeof(int));
    printf("\nEnter the array:\n");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the target element:\n");
    scanf("%d",&target);
    twosum(arr,size,target,&ind1,&ind2);
    if(ind1!=-1&&ind2!=-1){
        printf("%d %d",ind1,ind2);
    }
    else{
        printf("No two numbers add up to the target\n");
    }
    free(arr);
    return 0;
}