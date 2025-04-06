// Practice program 13

//Palindrome number

#include<stdio.h>
void main(){
	int n,rev=0,rem;
	printf("Enter a number\n");
	scanf("%d",&n);
	int temp=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev){
		printf("Palindrome");
	}
	else{
		printf("Not a palindrome");
	}
	
}
