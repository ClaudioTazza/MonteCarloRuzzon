from funzione import Pgreco
from funzione import LPgreco
from funzione import Media
from funzione import Varianza


ListaPgreco = LPgreco(20)
MediaL = Media(ListaPgreco)

print 'Lista', ListaPgreco
print 'Media', MediaL
print 'Varianza', Varianza(ListaPgreco, MediaL)
