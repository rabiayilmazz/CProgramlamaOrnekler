#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	
	int eleman=0,gecici=0,mode=0, modd=0;
	float  toplam=0;
	
	//aritmetik ortalama burasý ao ve mod ? eleman kardeþimiz :d okey çay içer misin . yok :P sen çay iç ben pcni kurcalim yok olmaz :D olur olur :Pbir þey yok ki kurcala bakim nasýl kurcalýyorsun 
	//virus var mýdiye bakcam yavaþsa hýzlandýrcam öyle yani tamam ama ben bilgisayarý evin ortasýnda kendi kendine bir þeyler yaparken mi býrakýcam :D ekraný
// bilmiyromu olcak mý bi dk. olmuyo neyseben ekraný aþaðý indirim umarým üstüne kapanmaz :Dtam

	printf("girilecek dizinin boyutunu giriniz...");
	scanf("%d",&eleman);
	int dizi[eleman];
	
	printf("girilecek elemanlarý tek tek giriniz...\n");
	
	for(int i=0; i<eleman ; i++)
	{
		printf("%d. elemaný giriniz...: ",i+1);
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
