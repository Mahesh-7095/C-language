//Practice program 18

//Factorial of a number

#include<stdio.h>
void main(){
	int num,fact=1,i;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	
	printf("The Factorial of a number is %d\n",fact);
}
