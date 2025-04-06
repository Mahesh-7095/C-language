//Operators 
#include<stdio.h>
void main(){
	//arithmetic operators in c
	
	int a=10;
	int b=20;
	printf("Sum is %d\n",a+b);
	printf("Diff is %d\n",a-b);
	printf("Product is %d\n",a*b);
	printf("Division is %d\n",a/b);
	printf("Modulo division is %d\n",a%b);
	printf("Pre increment a=%d\n",++a);
	printf("Post increment a=%d\n",a++);
	printf("after increment a=%d\n",a);
	printf("Pre decrement a=%d\n",--a);
	printf("Post decrement a=%d\n",a--);
	printf("After decrement a=%d\n",a);
	
	
	
	//Relational operators
	
	
	 a=10;
	 b=20;
	printf("equal to %d\n",a==b);
	printf("not equals %d\n",a!=b);
	printf("a > b %d\n",a>b);
	printf("a < b %d\n",a<b);
	printf("a <= b %d\n",a<=b);
	printf("a >= b %d\n",a>=b);
	
	
	
	
	// assignment operators
	
	int k=10;
	printf("k=%d\n",k);
	k+=5;
	printf("Now K= %d\n",k);
	
	
	
	//Logical operators
	
	
	
	int m=10,n=20,o=20;
	printf("m>n and n==o   is %d\n",m>n && n==o);
	printf("m<n or n==o is %d\n",m<n || n==o);
	printf("not (m>n)\n",!(m>n));
	
}
