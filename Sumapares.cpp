//Programa for para imprimir suma de numeros pares 1 a 100
#include <iostream>
int main(void)
{
  int sum=0, ii=0;

  //(Inicializacion; condicion; incremento)
  for(ii=0; ii<=100; ii=ii+2) //el ii=ii+2 incrementa de 2 en 2
    {
      sum += ii;
    }
  std::cout << sum << std::endl;
  return 0;
}
