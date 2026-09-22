#include<stdio.h>
void main(){
	int arr[100];
	int i,n,key;
	
	printf("Enter the total number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number that you want to search: ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("Number found at index: %d",i);
		}
	}
	
}
