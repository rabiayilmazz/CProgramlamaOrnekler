#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
 
    int dizi[50], gecici, adet;
    
    printf("Kac adet sayi girilecek: ");
    scanf("%d", &adet);  //Kaç adet sayý girileceðini kullanýcýdan alýyoruz
    
    for(int i=0; i<adet; i++){  // Kullanýcýdan sayýlarý alýyoruz
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    for(int i=0; i<adet-1;i++){ 
        for(int j=i+1; j<adet; j++){
            if(dizi[i] > dizi[j]){
                gecici = dizi[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                dizi[i] = dizi[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                dizi[j] = gecici; // Dizi[j] ye ise dizi[i] deðerini kaydediyoruz. Bu deðeri gecicide saklamýþtýk
            }
        }
    }
 
        for(int i=0; i<adet; i++)
            printf("%d ", dizi[i]);
        
    
    printf("\n");
    system("pause");
    return 0;
}
