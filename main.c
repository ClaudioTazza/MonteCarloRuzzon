#include <stdio.h>
#include "random.h"
#include <math.h>

#define NVAL 2

int main(){
  int i, frecceTotali, frecceG = 0, raggio, origine[NVAL] = {0, 0}, x[NVAL], puntoFreccia[NVAL];
  double distanza, Pgreco;


  printf("Quante frecce vuoi lanciare? ");
  scanf("%d", &frecceTotali);

 for(i = 0; i < frecceTotali; i++){
    raggio = random_between(0, 100);

    puntoFreccia[0] = random_between(-raggio, raggio);
    puntoFreccia[1] = random_between(-raggio, raggio);

    distanza = sqrt( (x[0] - x[1]) * (x[0] - x[1]) )

    if(distanza > raggio) frecceG++;
  }

  Pgreco = ((double)frecceG/frecceTotali) * 4;
  printf("Pgreco : %d\n", Pgreco );
}
