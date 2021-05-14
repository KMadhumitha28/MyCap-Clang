//The program returns the LCM of the two numbers
#include <stdio.h>

int lcm_of_nums(int,int);//function prototype

int main(){
	int num1 ,num2, lcm;
	printf("Enter the first number: "); //taking inputs from user
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	lcm=lcm_of_nums(num1,num2);
	printf("The lcm of %d and %d is %d",num1,num2,lcm);
	
	return 0;
}

int lcm_of_nums(int a, int b){
	static int lcm=1; 
	if(lcm%a==0 && lcm%b==0){
		return lcm; //using the fact that the lcm is the smallest positive integer that is evenly divisible by both a and b
	}
	else{
		lcm++;
		lcm_of_nums(a,b);
		return lcm;
	}
}
