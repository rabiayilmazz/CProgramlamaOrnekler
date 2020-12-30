#include <stdio.h>

int main() {
	float x;
	float y;
	printf("Please enter a value (-2,5)");
	scanf("%f",&x);

	if(x>=(-2) && x<0){
		y = x;
		printf("birinci");
	}
	else if(x>0 && x<2){
		y = 2*x;
		printf("ikinci");
	}
	else if(x>=2 && x<5){
		y  = (-4*x+20);
		y=y/3;
		printf("ucuncu");
	}
	else{
		printf("Error! ");
	}
	printf("x: %.2f, y: %.2f", x, y);
	return 0;

}
