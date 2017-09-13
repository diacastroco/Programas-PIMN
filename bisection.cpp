#include <iostream>
#include <cmath>

double F(double x)
{
  return  (x*x)-(5*x)+1;
}


int main(void)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(16); 
  int ii=0, NMAX=30;      
  double xu=-1.0, xl=2.0, xr=0.0;  
  double eps= 1.0e-6;     
  
  while (ii<=NMAX)
    {
      xr=0.5*(xl+xu);
      std::cout << xl << '\t'
		<< xu << '\t'
		<< xr << '\t'
		<< F(xr) << std::endl;
      if(std::fabs(F(xr))<=eps) break;
      if (F(xl)*F(xr)<0)              
	{
	  xu=xr;
	}
      else                            
	{
	  xl=xr;
	}    
      ii++;                           
    }
  std::cout << xr << std::endl;
  return 0;
}
