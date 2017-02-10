import random
import math

def Pgreco(frecceTotali):
  frecceG = 0

  for i in xrange(frecceTotali):
    x = random.uniform(-1, 1)
    y = random.uniform(-1, 1)

    distanza = x * x + y * y

    if distanza < 1:
      frecceG = frecceG + 1

  Pgreco = float(frecceG)/frecceTotali * 4
  return Pgreco


def LPgreco(NElem):
  ListaPgreco = []

  for i in range(NElem):
    VarPgreco = Pgreco(8)
    ListaPgreco.append(VarPgreco)

  return ListaPgreco


def Media(Lista):
  return sum(Lista)/len(Lista)


def Varianza(Lista, Media):
  varianza = 1

  for i in xrange(len(Lista)):
    varianza = math.sqrt(varianza + (Lista[i] - Media)**2 )

  return varianza
