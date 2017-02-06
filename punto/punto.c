#include "punto.h"
#include <math.h>
#include <stdlib.h>

int punto_distance(int x[], int y[]){
  int valore;
  valore = (x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]);
  return sqrt(valore);
}
