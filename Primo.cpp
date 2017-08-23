//Lee un numero e imprime si es primo o no
#include <iostream>
int main(void)
{
  //ii es el divisor, n es un contador, a es el numero
  int ii=0, n=0, a=0;
  std::cout << "Introduzca un numero entero:" << std::endl;
  std::cin >> a;

  for(int ii=1; ii<(a+1); ii++) /* Empezando de ii=1, empieza a probar
  un numero que pueda ser divisor de a, luego vuelve  a sumar 
  (ii++) para seguir probando hasta un numero entero antes que a */

    if(a%ii==0) //Que sea divisible por un ii
      {
	n++; //n es contador, si un ii divide a a, el contador empieza a sumar
      }

  std::cout << a;
  
   ((n==2) || (n==1)) ? //a tiene o 1 o dos divisores solamente
      std::cout << " SI" : std::cout << " NO";
    
  
  std::cout << " es primo" << std::endl;
  return 0;
}
  
  
