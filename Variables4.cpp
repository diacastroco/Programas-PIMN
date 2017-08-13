#include <iostream>
#include <cmath> 
//Libreria

int main(void)
{
  double a=0.0,b=0.0;
  //Declarando e inicializando variables
  
  std::cout << "Introduzca dos numeros enteros:" << std::endl;
  std::cin >> a >> b;
  //Muestra los dos numeros en la pantalla
  
  std::cout // se pone << para introducir '\n' (newline) y '\t' (space)
    << "La suma de los enteros es" << '\t' << a+b << '\n' //Suma
    << "La resta de los enteros es" << '\t' << a-b << '\n' //Resta
    << "La multiplicacion de los enteros es" << '\t' << a*b << '\n' //Multiplicacion
    << "La division de los enteros es" << '\t' << a/b << '\n'; //Division
  
  
  int max=0; //Declarando maximo
  if (a>b)
    {
      max=a;
    }
  else
    {
      max=b;
    }
  //Si a>b entoces imprime maximo=a, si no imprime maximo=b
  
  std::cout <<"El numero mayor es" << '\t' << max << std::endl;
  return 0;
}
  
