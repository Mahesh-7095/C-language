//Practice program 28

//Friendly pair , where twp numbers ratio is same that , what the ratio is , sum of divisors / numbers are same 

#include<stdio.h>
void main(){
	int num1,num2,sum1=0,j,i,sum2=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	for(i=1;i<num1;i++){
		if(num1%i==0){
			sum1=sum1+i;
		}
	}
	for(j=1;j<num2;j++){
		if(num2%j==0){
			sum2=sum2+j;
		}
	}
	if((sum1/num1) == (sum2/num2)){
		printf("It is friendly pair");
	}
	else{
		printf("Not a friendly pair");
	}
}
