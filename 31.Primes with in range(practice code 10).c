//Practice program 10

//Prime number within a given range

#include<stdio.h>
void main(){
	int start,end,i,flag,j;
	printf("enter start and end ");
	scanf("%d%d",&start,&end);
	for(i=start;i<end;i++){
		flag=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=1;
			}
		}
		if(flag==1){
			continue;
		}
		else{
			printf("%d\n",i);
		}
	}
}
