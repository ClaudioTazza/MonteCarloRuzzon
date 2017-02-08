from main import Pgreco

volte = input('Quante volte vuoi calcolare il Pgreco? ')
n = 1

for i in range(volte):
  print 'Pgreco', n, Pgreco()
  n = n + 1 