/*-------------------------------------------
 * Dato de entrada: largo, ancho (double)
 * Dato de Salida: area, perimetro (double)
 --------------------------------------------*/

#include "CRectangulo.h"

int main()
{
  CRectangulo   obj1(40,20);

  cout << "El perimetro es : " << obj1.perimetro() << "\n";
  cout << "El area es      : "  << obj1.area() << "\n";

  tnumero l,a;
  cout << "Largo: ";
  cin >> l;
  cout << "Ancho: ";
  cin >> a;
  CRectangulo   r2(l,a);
  cout << "Objeto dos\n";
  cout << "Perimetro : " << r2.perimetro() << "\n";
  cout << "Area      : " << r2.area() << "\n";

  //--- tercer objeto.
  CRectangulo r3;  //-- acabo de crear el objeto usando el constructor por defecto
  cout << "Trabajando ahora con el tercer objeto\n";
  cout << "Largo : ";
  cin >> l;
  cout << "Ancho : ";
  cin >> a;
  r3.setLargo(l);
  r3.setAncho(a);
  cout << "El perimetro es : " << r3.perimetro() << "\n";
  cout << "El area es      : " << r3.area() << "\n";

  //------ahora vamos a modificar el valor del largo en 10 mas
  //----- que el valor del ancho sea 5 unidades mas
  r3.setLargo(r3.getLargo() + 10);
  r3.setAncho(r3.getAncho() + 5);
  cout << "El nuevo perimetro es: " << r3.perimetro() << "\n";
  cout << "El nuevo valor del area es : " << r3.area() << "\n";

  return 0;
}
