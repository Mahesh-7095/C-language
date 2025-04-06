//Data types in c
#include<stdio.h>
void main(){
	int a=10;
	float k=10.87;
	char m='p';
	double  d=10.98;
	printf("%d\n",a);
	printf("%f\n",k);
	printf("%c\n",m);
	printf("%lf\n",d);
	
	
	//Character data type
	
	char p=65,q=66;
	printf("%c %c\n",p,q);
	
	
	//scientific numbers
	
	float u=35e3;
	printf("\n%f",u);
	
	
	//decimal precision
	
	float v=10.8793;
	printf("\n%.2f\n",v);
	
	
	int a1;
	float a2;
	char a3;
	double a4;
	printf("%d\n",sizeof(a1));
	printf("%d\n",sizeof(a2));
	printf("%d\n",sizeof(a3));
	printf("%d\n",sizeof(a4));
	
}

