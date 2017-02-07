#include <stdio.h>
#include "random.h"
#include <math.h>

#define NVAL 2

int main(){
  int i, frecceTotali, puntoFreccia[NVAL], frecceG = 0, raggio, origine[NVAL] = {0, 0};
  double distanza, Pgreco;

  random_init();
  raggio = 5;

  printf("Quante frecce vuoi lanciare? ");
  scanf("%d", &frecceTotali);

  for(i = 0; i < frecceTotali; i++){
    puntoFreccia[0] = random_between(-raggio, raggio);
    puntoFreccia[1] = random_between(-raggio, raggio);

    distanza = sqrt((puntoFreccia[0] - puntoFreccia[1]) * (puntoFreccia[0] - puntoFreccia[1]) );

    if(distanza < raggio) frecceG++;
  }

  Pgreco = ((double)frecceG/frecceTotali) * 4;
  printf("Pgreco : %f\n", Pgreco );
}
