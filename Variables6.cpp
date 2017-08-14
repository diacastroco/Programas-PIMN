#include <iostream>
#include <cmath>
int main(void)
{
  double a=0.0,b=0.0,c=0.0;
  std::cout << "Introduczca tres numeros enteros:" << std::endl;
  std::cin >> a >> b >> c;
  
  if (a<=b && a<=c)
    {
      if (b<=c)
	{
	  std::cout << a << "," << b << "," << c << std::endl;
	}
      else
	{
	  std::cout << a << "," << c << "," << b << std::endl;
	}
    }
  else
    {
      if (b<=a && c<=a)
	{
	  if (b<=c)
	    {
	      std::cout << b << "," << c << "," << a << std::endl;
	    }
	  else
	    {
	      std:: cout << c << "," << b << "," << a << std::endl;
	    }
	}
    }

  return 0;
}
