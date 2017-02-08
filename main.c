#include <stdio.h>
#include "random.h"

#define NVAL 2

int main(){
  int i, frecceTotali, frecceG = 0;
  double distanza, Pgreco, puntoFreccia[NVAL];

  random_init();

  printf("Quante frecce vuoi lanciare? ");
  scanf("%d", &frecceTotali);

  for(i = 0; i < frecceTotali; i++){
    puntoFreccia[0] = random_between_f(-1, 1);
    puntoFreccia[1] = random_between_f(-1, 1);

    distanza = puntoFreccia[0] * puntoFreccia[0] + puntoFreccia[1] * puntoFreccia[1];

    if(distanza < 1) frecceG++;
  }

  Pgreco = ((double)frecceG/frecceTotali) * 4 ;
  printf("Pgreco : %f\n", Pgreco );
}
