#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int eleman=0,gecici=0,mode=0, modd=0;
	float  toplam=0;
	
	//aritmetik ortalama buras� ao ve mod ? eleman karde�imiz :d okey �ay i�er misin . yok :P sen �ay i� ben pcni kurcalim yok olmaz :D olur olur :Pbir �ey yok ki kurcala bakim nas�l kurcal�yorsun 
	//virus var m�diye bakcam yava�sa h�zland�rcam �yle yani tamam ama ben bilgisayar� evin ortas�nda kendi kendine bir �eyler yaparken mi b�rak�cam :D ekran�
// bilmiyromu olcak m� bi dk. olmuyo neyseben ekran� a�a�� indirim umar�m �st�ne kapanmaz :Dtam

	printf("girilecek dizinin boyutunu giriniz...");
	scanf("%d",&eleman);
	int dizi[eleman];
	
	printf("girilecek elemanlar� tek tek giriniz...\n");
	
	for(int i=0; i<eleman ; i++)
	{
		printf("%d. eleman� giriniz...: ",i+1);
		scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];		
	}
	printf("aritmetik ortalama: %f\n", toplam/eleman);
	
	modd=dizi[0];
	   for (int i = 0; i < eleman; ++i) {
        gecici = 0;
        for (int k = 0; k < eleman; ++k)
            if (dizi[k] == dizi[i]) 
                gecici++;
        if (gecici > mode) {
            mode = gecici;
            modd = dizi[i];
        }
        
    }
    printf("modd: %d\n",modd);

	printf("\n");
    system("pause");
	
	return 0;
}
