//Practice program 17

//Find the Nth Term of the Fibonacci Series

#include<stdio.h>
void main(){
	int range,i,fib3;
	int fib1=0;
	int fib2=1;
	printf("enter the nth place\n");
	scanf("%d",&range);
	for(i=2;i<range;i++){
		fib3=fib1+fib2;
		fib1=fib2;
		fib2=fib3;
	}
	printf("%d",fib3);
}
