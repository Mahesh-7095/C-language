//Practice program 14

//Armstrong number

#include<stdio.h>
#include<math.h>
void main(){
	int num,count=0,rem,num1,armcount=0;
	printf("enter a number");
	scanf("%d",&num);
	num1=num;
	int num2=num;
	while(num1>0){
		rem=num1%10;
		count+=1;
		num1=num1/10;
	}
	while(num>0){
		rem=num%10;
		armcount=armcount+pow(rem,count);
		num=num/10;
	}
	
	if(armcount==num2){
		printf("Armstrong number");
	}
	else{
		printf("Not an Armstrong number");
	}
}
