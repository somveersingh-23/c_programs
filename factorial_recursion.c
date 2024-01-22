#include<stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    else return n*fact(n-1);
}
void main(){
	
	int n;
	printf("Enter a no :\n");
	scanf("%d",&n);
    printf("\nFactorial of the given no is:\n %d",fact(n));
}