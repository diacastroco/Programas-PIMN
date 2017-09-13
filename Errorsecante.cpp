


#include <iostream>
#include <cmath>

double f(double x);

int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=50;
  double xr=0.0, xi1=-2.0, xi=-1.0, eps=1.0e-10;

  for (int ii=1; ii<=NMAX; ii++)
    {
      xr=xi-(f(xi)*(xi1-xi))/(f(xi1)-f(xi));
      xi=xi1;
      xi1=xr;
      std::cout << ii << '\t'
		<< std::fabs(1-std::fabs(xi/xi1))*100 << std::endl;
      if(std::fabs(f(xr)<=eps))
	{
	  break;
	}
    }   

  return 0;
}


double f(double x)
{
  return (x*x)-5*x+1;
}







