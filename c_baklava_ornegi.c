#include <stdio.h>
#include <stdlib.h>
/*
bu kod ile girilen değerde
   *
  ***
 *****
  ***
   *
 şeklinde bir çıktı üretmek amaçlanmıştır.
 */

int main ()
{
	int i, j, y, b, s;
	
	printf("Sayi giriniz: ");
	
	scanf("%d", &s);
	
	b=s; 
	y=1;
	
	for(i = 0 ; i < s ; i++)
	{
		for(j = 1 ; j <= b ; j++)
		{
			printf(" ");
		}
		
		b--;
		
		for(j = 1 ; j <= y ; j++)
		{
			printf("*");
		}
		
		y = y + 2;			
		
		printf("\n");
	} 
	  
		y = y - 4;
		
	for(i = 1 ; i < s ; i++)
	{
		for(j = 0 ; j <= i ; j++)
		{
			printf(" ");
		}
		
		b++;
		
		for(j = 1 ; j <= y ; j++)
		{
			printf("*");
		}
		
		
		y = y - 2;			
		
		printf("\n");
	} 
	return 0;	
}
