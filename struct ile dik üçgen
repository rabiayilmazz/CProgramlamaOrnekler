int fonk (int a,int b , int c);
 struct ucgen {
 	int x1,x2,x3,y1,y2,y3;
 	int x,y,z;
 	
 };
int main() {
	 struct ucgen k;

	printf (" sayi giriniz ");
	scanf ("%d %d",&k.x1,&k.y1);
	printf (" sayi giriniz ");
	scanf ("%d %d",&k.x2,&k.y2);
	printf (" sayi giriniz ");
	scanf ("%d %d",&k.x3,&k.y3);
                k.x=(k.x1-k.x2)*(k.x1-k.x2)+(k.y1-k.y2)*(k.y1-k.y2);
                k.y=(k.x2-k.x3)*(k.x2-k.x3)+(k.y2-k.y3)*(k.y2-k.y3);
                k.z=(k.x1-k.x3)*(k.x1-k.x3)+(k.y1-k.y3)*(k.y1-k.y3);
	
	
	 if (k.x==k.y+k.z ||k.x+k.y==k.z ||k.x+k.z ==k.y )
 printf ("\n \n 1");
 else printf ("0");
        getchar();
    return 0;
}
