#include<stdio.h>

int main(){

	
	int num,temp=0,rem;
	printf("Enter Number:");
	scanf("%d",&num);
	int count=0;
	int z=num;
	while(z!=0){
		rem=z%10;
		temp=rem+temp*10;
		z=z/10;


	}
	printf("Reverse String=%d\n",temp);
	if(temp==num){
		printf("String Is Palindrome");

	}

	else{
		printf("String Is Not Palindrome");
	}



}
