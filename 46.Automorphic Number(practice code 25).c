//Practice code 25

//Automorphic number  , the square of the number last digits equals to that number 

#include<stdio.h>
void main(){
	int num,rem,count=0,tnum=0,sq;
	printf("Enter a number");
	scanf("%d",&num);
	sq=num*num;
	int numd=num;
	int numd2=num;
	while(numd>0){
		rem=numd%10;
		count+=1;
		numd=numd/10;
	}
	int i=1;
	while(i<=count){
		rem=sq%10;
		tnum=tnum+rem*i;
		i++;
		sq=sq/10;
	}
	if(num==tnum){
		printf("Automorphic number");
	}
	else{
		printf("NOt an Antomorphic number");
	}
}
