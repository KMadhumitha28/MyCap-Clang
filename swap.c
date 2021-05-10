#include <stdio.h>
int main(){
    int num1, num2, choice;
    printf("Hello MyCaptain");
    printf("\nEnter the first number ");
    scanf("%d",&num1);
    printf("\nEnter the second number ");
    scanf("%d",&num2);
    printf("\nthe first number is %d and second number is %d.",num1,num2);
    printf("\nIf correct, enter 0 : ");
    scanf("%d",&choice);
    printf(choice==0?printf("Now, num1=%d and num2=%d.",num2,num1):"Plz try again.");

    return 0;
}
