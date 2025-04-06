//Switch Statement


#include<stdio.h>
void main(){
	int a,b,choice;
	printf("1.Addition 2.substaction 3.Multiplication 4.Division 5.Modulo Division\nenter your choice\n");
	scanf("%d",&choice);
	printf("Enter values of a and b\n");
	scanf("%d%d",&a,&b);
	switch(choice){
		case 1:printf("Addition is %d",a+b);
				break;
		case 2:printf("Substraction is %d",a-b);
				break;
		case 3:printf("Multiplication is %d",a*b);
				break;
		case 4:printf("Division is %d",a/b);
				break;
		case 5:printf("Modulo Division is %d",a%b);
				break;
		default:printf("Invalid choice\n");
			
	}
}
