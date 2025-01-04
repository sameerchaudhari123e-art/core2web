

#include<stdio.h>


int main(){

	int a1,a2,a3;
	printf("Enter Angle");
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	if ( a1+a2+a3 == 180){
		printf("valid");
	}
	else{
		printf("invalid");
	}

}
