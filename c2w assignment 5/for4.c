#include<stdio.h>



int main(){

	int i,e;

	printf("Enter Start:");
	scanf("%d",&i);

	printf("Enter End:");
	scanf("%d",&e);
	int sum  = 0;
	
	for(int x = i ; x <= e ; x++ ){
		
		sum = sum + x;	
		

	}
	printf("%d\n",sum);

}
