//Practice program 12

//Reverse of a number 

#include<stdio.h>
void main(){
	int n,rev=0,rem;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	printf("The reversed number is %d",rev);
}
