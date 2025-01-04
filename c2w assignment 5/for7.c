#include<stdio.h>


int main(){

	
	int i,e;

	printf("Enter Start:");
	scanf("%d",&i);

	printf("Enter End:");
	scanf("%d",&e);
	int pro  = 1;
	
	for(int x = i ; x <= e ; x++ ){
		if(x%2==1){	
		pro = x*x*x;	
		printf("%d\n",pro);
		}

	}


}
