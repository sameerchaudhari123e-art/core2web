#include<stdio.h>

void main(){

	
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	int ch=1;
	for(int i = 1; i<= row;i++){
		for(int j = 1;j <= row;j++){
				
			printf("%d ",ch);
			ch+=2;

		
		}

		printf("\n");
	}

}



