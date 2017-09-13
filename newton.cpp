#include <iostream>
#include <cmath>

double f(double x);
double fp(double x);

int main(void)
{
  int NMAX=50;
  double x1=0.0, x0=1.0, esp=1.0e-10;
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  for (int ii=1; ii<=NMAX; ii++)
    {
      x1=x0-(f(x0)/fp(x0));
      std::cout << ii << '\t'
		<< x1 << '\t'
		<< x0 << '\t'
		<<f(x1) << '\t' << std::endl;
	x0=x1;
      if(f(x1)<=esp)
        {
	  break;
	}
    }
  std::cout << x1 << std::endl;
  return 0;
}

double f(double x)
{
  return (x*x)-(5*x)+1;
}


double fp(double x)
{
  return 2*x-5;
}
