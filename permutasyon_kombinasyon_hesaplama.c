#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int x = 0, n = 0, r = 0,s1 = 1,s2 = 1;
	
	printf("yapmak istediğiniz işlemin numarasını giriniz...\n");
	printf("kombinasyon için 1' i tuşlayın...\n");
	printf("permütasyon için 2'yi tuşlayınız...\n");
	
	scanf("%d",&x);
	
	printf("n değerini giriniz...");
	scanf("%d",&n);
	printf("r değerini giriniz...");
	scanf("%d",&r);
	printf("n: %d , r: %d \n",n,r);
	
	//kombinasyon
	if(x == 1)
	{
		if(r > n)
		{
			printf("r değeri n' den büyük olmaz!");
			
		}
		if(r < 0 && n < 0)
		{
			printf("girilen değerler negatif olamaz!");
		}
		else //kombinasyon hesaplayacak
		{
			for(int i = 1; i <= n; i++)
			{
				s1 = s1*i;
			}
			for(int i = 1; i <= (n-r); i++)
			{
				s2 = s2*i;
			}
			printf("kombinasyon: %d",s1/s2);
			
		}
		
	}
	
	//permütasyon
	else if (x == 2)
	{
		if(r > n)
			printf("r değeri n değerinden küçük olamaz! Lütfen baştan değer giriniz...");
			
		else if(r < 0 && n < 0)
			printf("girilen n ve r değerleri negatif olamaz!");
			
		else //permütasyon hesabı yapılacak
		{
			for(int i = 1; i <= n; i++)
			{
				s1 = s1*i;
			}
			for(int i = 1; i <= r; i++)
			{
				s2 = s2*i;
			}
			for(int i = 1; i <= (n-r); i++)
			{
				s2 = s2*i;
			}
			printf("permütasyon: %d",s1/s2);
				
		}	
	}
	
	else
		printf("YANLIŞ TUŞLAMA YAPTINIZ!");
	
	return 0;
}

