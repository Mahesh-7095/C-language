// Practice code 26

//Harshad number , the number is divisible by the sum of its digits


#include<stdio.h>
void main(){
	int num,sum=0,rem;
	printf("enter a number\n");
	scanf("%d",&num);
	int temp=num;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	if(num%sum==0){
		printf("Harshad number");
	}
	else{
		printf("Not a Harshad Number");
	}
}
