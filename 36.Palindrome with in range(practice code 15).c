//Practice code 15

//Armstrong number in a given range


#include<stdio.h>
#include<math.h>
void main(){
	int num,count,rem,num1,armcount,start,end;
	printf("enter the range i.e start and end");
	scanf("%d%d",&start,&end);
	while(start<=end){
	num1=start;
	int num2=start;
	int num3=start;
	count=0;
	armcount=0;
	while(num1>0){
		rem=num1%10;
		count+=1;
		num1=num1/10;
	}
	while(num3>0){
		rem=num3%10;
		armcount=armcount+pow(rem,count);
		num3=num3/10;
	}
	
	if(armcount==start){
		printf("%d\n",start);
	}
	start++;
	
}
}
