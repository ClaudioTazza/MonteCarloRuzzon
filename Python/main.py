import random

def Pgreco():
  frecceTotali = input('Quante frecce vuoi lanciare?')
  frecceG = 0

  for i in xrange(frecceTotali): 
    x = random.uniform(-1, 1)
    y = random.uniform(-1, 1)

    distanza = x * x + y * y

    if distanza < 1:
      frecceG = frecceG + 1

  Pgreco = float(frecceG)/frecceTotali * 4 
  return Pgreco