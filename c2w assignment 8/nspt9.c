#include<stdio.h>

void main(){
	
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	for(int i = 1; i<= row;i++){
		int x=1;
		int ch=65;
		for(int j = 1;j <= row;j++){
				
			if(j%2==1){
				printf("%d ",x);
				
				
			}
			else{
				
				printf("%c ",ch);
				
		
			
			}
			x+=1;
			ch+=1;


		
		}
		printf("\n");
		



	}



}	
