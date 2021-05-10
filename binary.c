#include <stdio.h>

int main(){
	int i,j;
	printf("Welcome Mycaptain\n");
	for(i=0;i<=6;i++){
		for(j=0;j<=i;j++){ //nested loop
			printf("01"); //prints 01 in the first line and increases its number whenever sfits to next line
		}
		printf("\n"); //helps in printing the in next line
	}
	
	return 0;
}
