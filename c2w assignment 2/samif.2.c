


#include<stdio.h>

int main(){
	int x;
	printf("Enter Number\n");
	scanf("%d",&x);
	if (x % 5 == 0|| x % 10 == 0){
		printf("Number Is Divisible By 5 or 10\n");
	}
	else{
		printf("Number is not  divisible by 5 or 10\n");
	}


}
