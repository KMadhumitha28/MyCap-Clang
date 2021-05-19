#include <stdio.h>
#include <stdlib.h>

int main(){
	int matrix[4][4],i=1,j=1,sum=0;
	printf("Enter the numbers of the matrix starting from");
	for(i=1;i<4;i++){
		for(j=1;j<4;j++){
			printf("\na%d,%d",i,j);
			scanf("%d",&matrix[i][j]);	
		}
	}
	for(i=1;i<4;i++){
		for(j=1;j<4;j++){
			if(i=j){
				sum=sum+matrix[i][j];
			}
		}
	}
	printf("the sum of the diagonal elements is %d",sum);
	return 0;
}
