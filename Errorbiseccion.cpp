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
  int ii=0,  NMAX=50;
  double xu=-1.0, xl=2.0, xr=0.0;
  const double eps=1.0e-10;

  for(ii=1; ii<=NMAX; ii++)
    {
      xr=0.5*(xl+xu);
	      
      if(std::fabs(f(xr))<=eps)
	{
	  break;
	}
      
      if(f(xr)*f(xl)<0)
	{
	  std::cout << ii << '\t' << std::fabs((xr-xu)/xr)*100 << std::endl;
	  xu=xr;
	}
      
      else
	{
	  std::cout << ii << '\t' << std::fabs((xr-xl)/xr)*100 << std::endl;
	  xl=xr;
	}
    }
  return 0;
}
