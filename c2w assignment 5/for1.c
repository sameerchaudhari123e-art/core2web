#include<stdio.h>

int main(){

	int i,e;
	printf("Enter Start:");
	scanf("%d",&i);
	
	printf("Enter End:");
	scanf("%d",&e);
	for (int x = i ; x <= e ;x++ ){
		if (x%2==0){

			printf("Even:%d\n",x);

		}
	}

}
