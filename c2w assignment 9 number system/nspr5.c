#include<stdio.h>

int main(){

	
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	int count=0;
	int z=num;
	while(z!=0){
		count++;
		z=z/10;


	}
	printf("%d\n",count);


}
