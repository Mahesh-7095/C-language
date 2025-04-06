//Practice program 7
//Greatest of the Three numbers
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("%d is greater",a);
	}
	else if(b>a && b>c){
		printf("%d is greater",b);
	}
	else{
		printf("%d is greater",c);
	}
}
