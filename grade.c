#include <stdio.h>

int main(){
	int marks=0;
	printf("Welcome \nEnter your marks : "); // taking the marks from the user
	scanf("%d",&marks); //scaning the marks
	
	
	if(marks>=85 && marks<=100){
		printf("Grade A");
	}
	else if(marks>=70 && marks<=84){
		printf("Grade B");
	}
	else if(marks>=50 && marks<=69){
		printf("Grade C");
	}
	else if(marks>=40 && marks<=49){
		printf("Grade E");
	}
	else if(marks>=0 && marks<=39){
		printf("Grade F");
	}
	else{
		printf("Enter the correct marks");
	}
	
	return 0;
	
}
