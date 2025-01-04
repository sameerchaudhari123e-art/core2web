#include<stdio.h>


void main(){

			
	int row;
	printf("Enter Row");
	scanf("%d",&row);
	for(int i = 1; i<= row;i++){
		int ch=65;
		for(int j = 1;j <= row;j++){
				
			if(i%2==1){
				printf("%c",ch);
				ch++;
			}
			else{
				ch+=32;
				printf("%c",ch);
				ch++;
			
			}
			
		
		}
		printf("\n");


	}



}
