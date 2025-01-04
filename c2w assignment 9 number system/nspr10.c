
#include<stdio.h>

int main(){

		
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	int sum=0;
	for(int i=1 ; i<=num/2 ; i++){

		if(num%i==0){
			sum=sum+i;
			
		
		}



	}
	printf("%d\n",sum);
	if(sum<num){
		printf("The Number Is Defficient");
	}
	
	else if(sum>num){
		printf("The Number Is Abundant");
	}
	


	
}
