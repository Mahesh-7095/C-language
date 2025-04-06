// Practice program 21

//Finding Prime Factors of a number 

#include<stdio.h>
void main(){
	int num,i,flag,m;
	printf("Enter a number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		flag=0;
		if(num%i==0){
			for(m=2;m<i;m++){
				if(i%m==0){
					flag=1;
				}
			}
			if(flag==0){
				printf("%d\n",i);
			}
		}
	}
}
