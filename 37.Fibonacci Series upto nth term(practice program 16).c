//Practice program 16

//Fibonacci Series upto nth term

#include<stdio.h>
void main(){
	int range,i,fib3;
	int fib1=0;
	int fib2=1;
	printf("enter the range\n");
	scanf("%d",&range);
	printf("%d\n%d\n",fib1,fib2);
	for(i=2;i<range;i++){
		fib3=fib1+fib2;
		printf("%d\n",fib3);
		fib1=fib2;
		fib2=fib3;
	}
	
}
