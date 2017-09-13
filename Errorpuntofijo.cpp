#include <iostream>
#include <cmath>
double f(double x);
double g(double x);
double fp(double x, int MAX, double eps);
int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=50;
  double eps=1.0e-10;
  double x=1.0;
  x=fp(x, NMAX, eps);
  return 0;
}

double f(double x)
{
  return (x*x)-(5*x)+1;
}

double g(double x)
{
  return ((x*x)+1)/5;
}

double fp(double x, int NMAX, double eps)
{
  double c, d;
  for (int ii=0; ii<=NMAX; ii++)
    {
      c=g(x);
      if (std::fabs(f(c))<=eps)
	{
	  break;
	}
      d= std::fabs(1-(x/c))*100;
      std::cout << ii << '\t'
		<< d << '\t' << std::endl; 
      x=c;
    }
  return c;
}
