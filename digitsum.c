//The recursive program to find sum of digits
#include <stdio.h>

int sum_of_digits(int n){  
	if n==0 return 0;  //recursion of digits
	return (n%10+ sum_-f_digits(n/10)); 
	
}
 int main(){
 	int num;
	printf("Enter the number"); //taking the number from the user
	scanf("%d",&num);
	printf("The sum of digits is %d",sum_of_digits(num));
	
	return 0; 
 }
