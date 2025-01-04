#include<stdio.h>


int main(){

	
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	int i=1;
	int x =10;
	if(num%2==0){
		while( i <= 10 ){

			printf("%d * %d = %d\n",num , i , num*i  );
			i++;
		}
	}
	else{
		
		while( x > 0 ){

			printf("%d * %d = %d\n",num , x , num*x  );
			x--;
		}
	
	
	}



}
