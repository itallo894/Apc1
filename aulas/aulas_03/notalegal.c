#include <stdio.h>

int main(){


  printf("\x1b[34m--------------------------\n");
  printf("     N O T A L E G A L    \n");
  printf("--------------------------\x1b[0m\n");
  printf("\x1b[33mITEM :          QTD  VALOR\x1b[0m\n");
  printf("%10s %03i %8.2f\n", "BANANA NANICA", 1,  15.00);
  printf("%11s %03i %8.2f\n", "MACA FUJI    ", 10, 50.00);
  printf("%10s %03i %8.2f\n", "UVA GLOBO    ", 5,  26.00);
  
  // printf("BANANA NANICA:   1   15.00\n");
  // printf("MACA FUJI:       10  50.00\n");
  // printf("UVA GLOBO:   5   26.00\n");

  printf("--------------------------\n");
  printf("\x1b[31mTOTAL:            R$ %4.2f\x1b[31m\n", 91.00);



  





  return 0;
}