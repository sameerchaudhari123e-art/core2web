#include<stdio.h>

int main(){

	
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	int count=1;
	for(int i=1 ; i<=num/2 ; i++){

		if(num%i==0){
			count++;
			
		
		}


	}
	if (count>2){
		printf("Entered Number Is Composite");


	}
	else{
		printf("Entered Number Is Not Composite");

	}



}
