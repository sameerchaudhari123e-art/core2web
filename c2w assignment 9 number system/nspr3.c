#include<stdio.h>

int main(){

	
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	int count=0;
	for(int i=2 ; i<=num/2 ; i++){

		if(num%i==0){
			count++;
			
		
		}

	}
	if (count==0){
		
		printf("Enter NUmber %d is prime\n",num);

	}	

	else {
		printf("Number is not prime");
	}

	


}
