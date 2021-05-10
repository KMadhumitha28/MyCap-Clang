#include <stdio.h>

int main(){
	int choice_num=0;
	printf("Welcome to ABC hotel");
	printf("\nEnter a number from 1 to 5- "); //taking number from user
	scanf("%d",&choice_num);
	//Using switch-case method
	switch(choice_num){
		case 1: printf("thankyou for choosing 1.\nFood Item: Pizza \nPrice: Rs.239");
		        break; 
	    case 2: printf("thankyou for choosing 2.\nFood Item: Burger \nPrice: Rs.129");
	            break;
	    case 3: printf("thankyou for choosing 3.\nFood Item: Pasta \nPrice: Rs.179");
	            break;
	    case 4: printf("thankyou for choosing 4.\nFood Item: French Fries \nPrice: Rs.99");
	            break;
	    case 5: printf("thankyou for choosing 5.\nFood Item: Sandwich \nPrice: Rs.149");
	            break;
	    default:printf("Please choose a number from 1 to 5");
		        break;       
	}
	return 0;
}
