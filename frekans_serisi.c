#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
	setlocale(LC_ALL,"Turkish");
    int eleman_sayisi=0;
    int dizi[eleman_sayisi];
    int sayac = 0;
    
    printf("diziniz ka� elemanl�...");
    scanf("%d",&eleman_sayisi);
    printf("dizi elemanlar�n�z� giriniz...\n");
    
    for(int i=0; i<eleman_sayisi; i++)
	{
		//printf("\n%d. eleman� giriniz...",i+1);
		scanf("%d",&dizi[i]);
    	            
    }    
    
    printf("\n\n");
    for(int i=0; i<eleman_sayisi; i++)
	{
        sayac = 1;
        for(int j=i+1; j<eleman_sayisi; j++)
		{
            if(dizi[i] == dizi[j])
			{
                sayac++;
                dizi[j] = -1897;
            }
        }
        if(dizi[i] != -1897)
            printf("%d\t%d\n", dizi[i], sayac);
    }    
 
    system("pause");
    return 0;
}





























