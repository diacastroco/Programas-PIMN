#include <iostream>
#include <cmath>

double f(double x) 
{
  return (x*x)-(5*x)+1;
}

int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=50, ii=0;
  double xr=0.0, xu=0.0, xl=0.0;
  xl=2.0;
  xu=-1.0;
  const double eps=1.0e-10;
  
  for(ii=0; ii<=NMAX; ++ii)
    { 
      xr=xu-((f(xu)*(xl-xu))/(f(xl)-f(xu)));
      std::cout << ii << '\t'
		<< xl << '\t'
		<< xu << '\t'
		<< xr << '\t'
		<< f(xr) << std::endl;
      
      if (std::fabs(f(xr))<=eps)
	{
	  break;
	}
      
      if(f(xr)*f(xl)>0)
	{
	  std::cout << (1-(f(xl)/f(xr))) << std::endl;
	  xl=xr;
	}
      
      else
	{
	  std::cout << (1-(f(xu)/f(xr))) << std::endl;
	  xu=xr;
	}
    }  
  std::cout << xr << std::endl;
  return 0;
  
}
