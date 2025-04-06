//Type conversion
#include<stdio.h>
void main(){
	//implicit conversion
	
	float a=9;
	printf("%f\n",a);
	
	
	//explicit conversion
	
	
	float k=(float)5/2;
	printf("%f\n",k);
	
	
	
	//other example of explicit conversion
	
	
	int max_score=500;
	int person_score =450;
	float percentage=(float) person_score/max_score * 100;
	printf("%f",percentage);
}
