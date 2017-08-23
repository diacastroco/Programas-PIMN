//Lee numero y dice si es divisible por 3 con operador ternario :
#include <iostream>
int main(void)
{
  int a=0;
  std::cout << "Introduzca un numero entero:" << std::endl;
  std::cin >> a;

  std::cout << a; //Muestra eso fijo, particion del cout

  (a%3==0) ?
    std::cout << " es" : std::cout << " no es";
  /* Si se cumple la condicion imprime parte izq del :,
     si no, imprime parte der del : */
  
  std::cout << " divisible por 3" << std::endl;
  return 0;
}
