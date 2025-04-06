//Sum of numbers in a given range
//Practice code 5
#include<stdio.h>
void main(){
	int start,end,sum=0,i;
	printf("enter start and end of numbers");
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++){
		sum=sum+i;
	}
	
	printf("The sum of n natural numbers is %d",sum);
}
