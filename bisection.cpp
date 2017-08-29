//Metodo de biseccion para encontrar raices
#include <iostream>
#include <cmath>

//Declarando funcion F con variable double x
double F(double x)
{
  //F(x)=(9.81...)
  return  (9.81*68.1/x)*(1-exp(-x*10/68.1))-40;
}


int main(void)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(16); 
  int ii=0, NMAX=30;                //ii es contador, hasta 30 pasos (NMAX)
  double xu=20.0, xl=10.0, xr=0.0;  
  double eps= 1.0e-6;               //La precision cercana a 0 que se desea
  
  while (ii<=NMAX)
    {
      xr=0.5*(xl+xu);               //Formula del metodo de biseccion
      std::cout << xl << '\t'
		<< xu << '\t'
		<< xr << '\t'
		<< F(xr) << std::endl;
      if(std::fabs(F(xr))<=eps) break;  //fabs (valor absoluto), break sale del while  
      if (F(xl)*F(xr)<0)                //La raiz se encuentra a derecha del xr
	{
	  xu=xr;
	}
      else                              //La raiz se encuentra a la izq de xr
	{
	  xl=xr;
	}    
      ii++;                             //Añade otro intento
    }
  std::cout << xr << std::endl;
  return 0;
}
