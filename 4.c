#include<stdio.h>
void main(){
	int num;
	printf("Enter number:");
	scanf("%d",num);
	int fact=1;
	if(num==0){
		fact==1;
	}
	else{
		while(num!=1){
		fact=fact*num;
		num--;
	}
	}
	
	printf("Factorial of %d is %d",num,fact);
}
