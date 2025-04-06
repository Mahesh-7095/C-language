//Practice Program 3

//Sum of First N Natural numbers:

#include<stdio.h>
void main(){
	int n,sum=0,i;
	printf("enter value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	
	printf("The sum of first n natural numbers is %d",sum);
}
