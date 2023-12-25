#include<stdio.h>

//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2

//Output:
//The sum of an Array: 18

int sumarray(int a[100],int n){
	int i,sum=0;
	for(i=0; i<n;i++){
		
		sum=sum+a[i];
	}
	
  return sum;	
}

void main(){
	
	int n,i;
	
	printf("Enter Array size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Attay Element :\n");
	
	for(i=0;i<n;i++){
		printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
printf("sum of all Array is %d",sumarray(a,n));

}
