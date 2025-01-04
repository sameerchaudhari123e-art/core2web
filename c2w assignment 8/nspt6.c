#include<stdio.h>

void main(){

	
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	int ch=row;
	for(int i = 1; i<= row;i++){
		for(int j = 1;j <= row;j++){
				
			printf("%d ",ch);
			ch+=4;	

		
		}
		
		printf("\n");
	}

}



