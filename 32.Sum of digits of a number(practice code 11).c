//Practice program 11

//Sum of digits of a number

#include<stdio.h>
void main(){
	int n,rem,sum=0;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n>0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	
	printf("Sum of Digits id %d",sum);
}
