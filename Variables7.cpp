#include <iostream>
#include <string>
int main(void)
{
  std:: string a, b, c;
  std::cout << "Introduczca tres palabras:" << std::endl;
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
