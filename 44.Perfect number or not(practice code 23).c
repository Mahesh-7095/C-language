//Practice program 23

//Perfect , find all divisors excluding that number and if the sum of divisors is equal to that number , then it is a perfect number


#include<stdio.h>
void main(){
	int num,sum=0,i;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("It is a perfect number\n");
	}
	else{
		printf("It is not a perfect number\n");
	}
}
