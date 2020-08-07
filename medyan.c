#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Turkish");

	int i,j;
	int eleman=0;
	int sayi[eleman];
	int tasiyici, uz;
	float medyan;
	float deger1, deger2;
	printf("girilecek dizi uzunluðunu giriniz...");
	scanf("%d",&eleman);
	printf("dizi elemanlarýný giriniz...\n");
	
	for(int i=0;i<eleman;i++)
	{
		scanf("%d",&sayi[i]);
	}
	uz=eleman-1;

   for (i=0;i<eleman;i++)
    {
	      for (j=i+1;j<eleman ;j++)
	      {
		
		      if(sayi[i]>sayi[j])
		      {
		           tasiyici=sayi[i];                          
		           sayi[i]=sayi[j];
		           sayi[j]=tasiyici;
		      }

      }
    }
    
     for(int i=0;i<eleman;i++)
     {
     	printf("%5d", sayi[i]);
	 }
        
    
    if ((uz%2)==0)
    {
        deger1=sayi[uz/2];
        printf("\nMedyan %f",deger1);
    }
    
    else if ((uz%2)==1)
    {
    	uz= (uz-1)/2+1;
    	
        deger1=sayi[uz];
        deger2=sayi[uz-1];
    
        deger1=deger1+deger2;
        deger1= deger1/2;
        
        printf("\nMedyan %f",deger1);
    }      
               
    printf("\n");
    system("pause");
}
