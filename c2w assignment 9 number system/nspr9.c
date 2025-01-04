#include<stdio.h>


int main(){

	
	
	int num,z,rem;
	printf("Enter Number:");
	scanf("%d",&num);
	z=num;
	int sum=0;
	while(z!=0){
		rem=z%10;
		int fact=1;
		for(int i=1 ; i<=rem ; i++){

			fact=fact*i;
		


		}	
		sum=sum+fact;
		z=z/10;

	}
	if(sum==num){
		printf("The Given Number is Strong Number");

	}	
	
	else{
		printf("The Given Number is Not Strong Number");

	}	


}
