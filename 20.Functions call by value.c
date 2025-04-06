//Functions 
//Call by value

#include<stdio.h>

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}
int mod(int a,int b){
	return a%b;
}
void main(){
	int choice;
	int p,q;
	printf("1.Addition 2.Substraction 3.Multiplication 4.Division 5.Modulo division\nenter your choice");
	scanf("%d",&choice);
	printf("Enter a and b values");
	scanf("%d%d",&p,&q);
	switch(choice){
		case 1:printf("%d",add(p,q));
				break;
		case 2:printf("%d",sub(p,q));
				break;
		case 3:printf("%d",mul(p,q));
				break;
		case 4:printf("%d",div(p,q));
				break;
		case 5:printf("%d",mod(p,q));
				break;
		default :printf("Invalid Choice\n");
	}
}
