#include<stdio.h>

void main(){

	
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	for(int i = 1; i<= row;i++){
		for(int j = 1;j <= row;j++){
				
			if(j%2==1){
				printf("*");
				
			}
			else{
				printf("#");
		
			
			}

		
		}
		printf("\n");
		


	}


}
