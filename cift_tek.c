#include <stdio.h>
#include <stdlib.h>
// girilen sayıya kadar çift ve tek sayıları ayıran kod
int main(int argc, char *argv[]) {
 	int x;
    
    int k=0,l=0;
    
    printf ("sayi giriniz ");
    scanf("%d",&x);
    
    int dizi1[x/2+1];
    int dizi2[x/2+1];
    
    for(int i=0;i<x;i++)
    {
		if (i%2==0)
        {
            dizi1[k]=i; 
            k++;
            
        }
        else 
        {
            dizi2[l]=i;
            l++;
        }
    }
    for(int i=0;i<x/2;i++)
    {
        printf(" %d\n",dizi1[i]);
   

    }
    
    for(int i=0;i<x/2;i++)
    {
         printf(" %d\n",dizi2[i]);
    }
return 0;
}
