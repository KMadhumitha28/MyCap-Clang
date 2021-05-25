#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20


//struct decleration
struct emp_details{
	char emp_name[30];
	int ser_no[MAXSIZE], emp_contact, emp_salary,emp_age;
};

typedef struct emp_details emp_info;
emp_info emp[MAXSIZE];   //declaring struct variable

void emp_display(int n);  //function prototype

int main(){
	int choice,num,mark;
	int i;
	printf("Welcome...Enter the number to employee details to be stored\n");
	scanf("%d",&num);
	//taking details from the user
	printf("Please enter the employee details\n");
	for(i=1;i<=num;i++){  
		printf("Enter the name of employee%d\n",i);
		scanf("%s",&emp[i].emp_name);
		
		printf("Enter the Age of employee%d\n",i);
		scanf("%d",&emp[i].emp_age);
		if(emp[i].emp_age<=0){
			printf("enter the correct age\n");
		}
		else{
			continue;
		}
		printf("Enter the Phone number of employee%d\n",i);
		scanf("%d",&emp[i].emp_contact);
		if(emp[i].emp_contact<1000000000){
			printf("Enter the correct number");
		}
		else{
			continue;
		}
		printf("Enter the salary of employee%d\n",i);
		scanf("%d",&emp[i].emp_salary);
		if(emp[i].emp_salary<=0){
			printf("Enter the correct salary");
		}
		else{
			continue;
		}
	}
	
	printf("Thankyou for entering the details\nTo crosscheck the details please enter 1 else enter 0\n");
	scanf("%d",&mark);
	if(mark==1){
		void emp_display(int num);
	}
	else{
		printf("Thankyou");
	}
	
	return 0;
}
	
void emp_display(int num){  //function call for printing employee details
    int i;
	printf("SerNo   Name   Age   Phonenumber   Salary\n");
	for(i=1;i<=num;i++){
		printf("%d   %s   %d   %d   %d\n",emp[i].ser_no,emp[i].emp_name,emp[i].emp_age,emp[i].emp_contact,emp[i].emp_salary);
	}	
}

