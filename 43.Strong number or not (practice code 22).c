// Practice program 22

//Strong number , where factorial of each digit equals to the number


#include<stdio.h>
void main(){
	int num,fact,sum=0,rem,i;
	printf("Enter a number\n");
	scanf("%d",&num);
	int temp=num;
	while(num>0){
		fact=1;
		rem=num%10;
		for(i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp){
		printf("It is a strong number");
	}
	else{
		printf("Not a strong number");
	}
}
