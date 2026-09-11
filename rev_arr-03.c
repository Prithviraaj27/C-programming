#include<stdio.h>
void main(){
	int arr[100];
	int i,n,sum=0;
	
	printf("Enter the total number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Original Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("Reversed Array: ");
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	
}
