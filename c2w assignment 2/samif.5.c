



#include<stdio.h>


int main(){

	char ch;
	printf("Enter Character=");
	scanf("%c",&ch);
	if (ch >= 65 && ch <= 90){
		printf("upper  case");
	}
	else if ( ch >= 97  && ch<=122){
		printf("lower Case");
	}
	else{
		printf("invalid Alphabet");
	}

}
