#include<stdio.h>
void main(){
	int x=10;
	int y=20;
	int z;
	z=x;
	x=y;
	y=z;
	printf("%d\n",x);
	printf("%d\n",y);
}	
