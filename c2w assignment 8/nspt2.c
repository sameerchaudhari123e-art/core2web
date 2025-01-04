#include<stdio.h>

void main(){

	
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	
	for(int i = 1; i<= row;i++){
		int x=row;
		for(int j = 1;j <= row;j++){
				
			printf("%d ",x);
			x--;
			

		
		}
		
		printf("\n");
	}

}


