#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
 
    int dizi[50], gecici, adet;
    
    printf("Kac adet sayi girilecek: ");
    scanf("%d", &adet);  //Ka� adet say� girilece�ini kullan�c�dan al�yoruz
    
    for(int i=0; i<adet; i++){  // Kullan�c�dan say�lar� al�yoruz
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    for(int i=0; i<adet-1;i++){ 
        for(int j=i+1; j<adet; j++){
            if(dizi[i] > dizi[j]){
                gecici = dizi[i]; // Dizi[i] yi kaybetmemek i�in gecicide tutuyoruz
                dizi[i] = dizi[j]; //dizi[i] yi dizi[i] den daha k���k olan dizi[j] kaydediyoruz
                dizi[j] = gecici; // Dizi[j] ye ise dizi[i] de�erini kaydediyoruz. Bu de�eri gecicide saklam��t�k
            }
        }
    }
 
        for(int i=0; i<adet; i++)
            printf("%d ", dizi[i]);
        
    
    printf("\n");
    system("pause");
    return 0;
}
