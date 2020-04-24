#include <stdio.h>
#include <stdlib.h>

// basit seri ile girilen sayıları büyükten küçüğe doğru sıralaması yapıldı (26.02.2020)

int main() 
{
	int n, dizi[n], gecici;

	printf("Seriniz kac elemanli?");
	scanf("%d",&n);
	printf("Seriniz %d elemanli.",n);
	
	printf("seri elemanlarini giriniz... \n");
	
	for(int i=0 ; i<n ; i++)
	{
	printf("%d. elemeni giriniz: ",i+1);
	scanf("%d",&dizi[i]);	
	}
	
	for(int i=0; i<n-1;i++)
	{ 
        for(int j=i+1; j<n; j++)
		{
            if(dizi[i] > dizi[j])
			{
                gecici = dizi[i]; 
                dizi[i] = dizi[j]; 
                dizi[j] = gecici; 
            }
        }
    }
    
     for(int i=0; i<n; i++)
	 {
     	 printf("%d ", dizi[i]);
	 }
 
    printf("\n");
    system("pause");
	return 0;
}
