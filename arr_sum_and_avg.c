#include<stdio.h>
int main(){
	int arr[100];
	int i,sum=0,avg=0,n;
	
	printf("Enter the total number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
		sum += arr[i];
	}
	printf("Sum: %d\n",sum);
	
	avg = sum/n;
	printf("Average: %d",avg);
	
	return 0;
	
}
