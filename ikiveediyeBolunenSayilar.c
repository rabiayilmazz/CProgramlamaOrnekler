#include <stdio.h>

int main() {
  int x,y,z;
  	printf("Please enter a value:");
  	scanf("%d",&x);
  	while(x!=0){
  		y=x%10;
  		if(y==1) {
  		z++;
  		}
  		x=x/10;
  	}
  	printf("%i",z);

}
