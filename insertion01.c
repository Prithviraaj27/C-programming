#include<stdio.h>
void main(){
	float arr[50];
	int i,n;
	
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%f",&arr[i]);
	}
	
	printf("Original array: ");
	for(i=0;i<n;i++){
		printf("%f ",arr[i]);
	}
	
	float element;
	int index;
	
	printf("\nEnter the new element: ");
	scanf("%f",&element);
	
	printf("Enter the index: ");
	scanf("%d",&index);
	
	for(i=n-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index] = element;
	
	printf("New Array: ");
	for(i=0;i<n;i++){
		printf("%f ",arr[i]);
	}
	
}
