//Practice program 27

//Abundant number, it is a number , where the sum of divisors id greater than the number , the difference is abundance

#include<stdio.h>
void main(){
	int num,i,sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum > num){
		printf("It is abundant number");
	}
	else{
		printf("Not an abundant number");
	}
}
