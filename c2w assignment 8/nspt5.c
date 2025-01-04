#include<stdio.h>

void main(){
	
	
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	for(int i = 1; i<= row;i++){
		int x=row;
		int y=1;
		for(int j = 1;j <= row;j++){
				
			if(i%2==1){
				printf("%d",y);
				y++;
			}
			else{
				printf("%d",x);
				x--;
			
			}

		
		}
		
		printf("\n");
	}

}



