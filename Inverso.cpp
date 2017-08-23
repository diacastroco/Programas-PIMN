//Programa para sumar inversos 1/n con tabla incluida
#include <iostream>
int main(void)
{

  std::cout.precision(16);  //Cifras decimales
  std::cout.setf(std::ios::scientific); //Notacion cientifica
  double sum=0.0;
  int ii=0;

  for(ii=1.0; ii<=123; ii++)
    {
      sum += 1.0/ii;
      
      /*Imprime una tabla de acuerdo al contador
        y su respectiva suma */
       std::cout << ii << '\t' << sum << std::endl;
    }
  
  return 0;
}
