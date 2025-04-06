//Practice code 24

//Perfect Square

#include<stdio.h>
#include<math.h>
void main(){
	int num,sr;
	printf("Enter a number\n");
	scanf("%d",&num);
	sr=sqrt(num);
	if(sr * sr == num){
		printf("True");
	}
	else{
		printf("false");
	}
}
