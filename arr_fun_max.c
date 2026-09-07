#include<stdio.h>
void largest(int arr[],int n){
	int max = arr[0];
	int i;
	for(i=1;i<n;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("%d",max);
}
void main(){
	int arr[100];
	int i,n;
	int max;
	
	printf("Nter n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	largest(arr,n);
	
}
