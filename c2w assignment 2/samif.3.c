

#include<stdio.h>



int main(){
	int x;
	printf("Enter Number=");
	scanf("%d",&x);
	if (x % 7 == 0 && x > 21){
		printf("Number is divisible by 7 and greater from 21");
	}
	else if (x % 7==0 && x < 21){
		printf("number is divisibleby 7 and less than 21");
	}
	else {
		printf("number is not divisible by 7");
	}


}
