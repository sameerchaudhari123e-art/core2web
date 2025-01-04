#include<stdio.h>

void main(){

	
	
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	
	for(int i = 1; i<= row;i++){
		int ch=1;
		for(int j = 1;j <= row;j++){
				
			printf("A%d ",ch);
			ch++;

		
		}
		
		printf("\n");
	}
		


}
