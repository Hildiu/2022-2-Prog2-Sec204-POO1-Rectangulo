//
// Created by mbermejo on 6/10/2022.
//

#include "CRectangulo.h"


tnumero  CRectangulo::area()
{
  return largo * ancho;
}


tnumero  CRectangulo::perimetro()
{
  return 2*largo + 2*ancho;
}