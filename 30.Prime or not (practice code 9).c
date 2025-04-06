//Practice program 9

//Prime number

#include<stdio.h>
void main(){
	int a,flag=0,i;
	printf("Enter value of a");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			flag=1;
		}
	}
	if(flag==0){
		printf("prime");
	}
	else{
		printf("Not a prime");
	}
}
