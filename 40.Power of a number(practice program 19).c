//Practice program 19

//Power of a number

#include<stdio.h>
void main(){
	int num, power,powered=1,i;
	printf("Enter number and its power\n");
	scanf("%d%d",&num,&power);
	for(i=1;i<=power;i++){
		powered=powered*num;
	}
	
	printf("The power of a number is %d",powered);
}
