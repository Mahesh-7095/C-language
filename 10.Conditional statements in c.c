//Conditional Statements

#include<stdio.h>
void main(){
	int p=10,q=20;
	
	//if statement
	if(q>p){
		printf("%d is greater than %d\n",q,p);
	}
	
	
	//if else statement
	
	
	int x=10;
	if(x%2==0){
		printf("%d is an even number\n",x);
	}
	else{
		printf("%d is an odd number\n",x);
	}
	
	
	//if else-if else
	
	
	int a=10,b=20,c=30;
	
	if(a>b && a>c){
		printf("%d is greater\n",a);
	}
	else if (b>a && b>c){
		printf("%d is greater\n",b);
	}
	else{
		printf("%d is greater\n",c);
	}
	
	
	
	//Ternary condition
	
	int m=10,n=20;
	(m>n)?printf("%d is greater",m):printf("%d is greater",n);
}
