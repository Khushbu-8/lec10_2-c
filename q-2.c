#include<stdio.h>
#include<string.h>

//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,

//Input:
//Enter any string: development

//Output:
//Length is: 11

int length(){

	char str[40];
	char len=0;
	
	printf("Enter string  :");
	gets(str);
	
	len=strlen(str);
	return len;
}

void main(){
		int ans;
	
	ans=length();
	printf("Lenth is %d :",ans);

	
	

}
