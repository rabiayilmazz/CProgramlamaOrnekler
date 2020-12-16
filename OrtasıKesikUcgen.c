#include <cs50.h>
#include <stdio.h>
// yıldızlı üçgen oluşturur fakat en tepedeki * sütunu siliktir.
int main(void)
{
    int h = 0;
  do{
       h = get_int("Height: ");
  } while (h<1 || h>8);

  for (int i = 0; i < h; i++)
  {
      for(int a=h-1; a>i; a--){
          printf(" ");
      }
      for (int j = 0; j <= i; j++)
      {
          printf("#");
      }
      for (int j = 0; j <= i+1; j++)
      {   
          if (j==0) printf("  ");
          else printf("#");
      }
      printf("\n");
  }
}
