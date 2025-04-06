//Functions
//Call by reference

#include<stdio.h>
void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
void main(){
	int a=10,b=20;
	printf("Before swapping a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("After swapping a=%d and b=%d\n",a,b);
}
