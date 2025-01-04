#include<stdio.h>


int main(){

	
	int i,e;

	printf("Enter Start:");
	scanf("%d",&i);

	printf("Enter End:");
	scanf("%d",&e);
	char ch='A';
	
	for(int x = i ; x <= e ; x++ ){
		
		if(x%2==1){
			printf("%d",x);
		}
		else{
			printf("%c",ch);

		}
		ch++;

	}

}
