

#include<stdio.h>




int main(){
	int x;
	printf("enter day number");
	scanf("%d",&x);
	switch(x){
		case 1:{
			       printf("monday");
			       break;
		       }
		case 2:{
				printf("tuesday");
				break;
		       }
		case 3:{
		 		printf("Wednesday");
				break;
			}
		case 4:{
			       printf("Thrusday");
			       break;
		       }
		case 5:{
			       printf("friday");
			       break;
		       }
		case 6:{
				printf("saturday");
				break;
		       }
		case 7:{
				printf("sunday");
				break;
		       }
		default:{
	 			printf("invalid");
				break;
			}			

}}
