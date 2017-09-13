#include <iostream>
#include <string>
int main(void)
{
  std:: string a=0,b=0,c=0, max=0,mid=0,min=0;
  std::cout << "Introduczca tres palabras:" << std::endl;
  std::cin >> a >> b >> c;
  
  if ((a<=b) && (a<=c))
    {     
      if (b<=c)
	{
	  min=a;
	  mid=b;
	  max=c;
	}
      else
	{
	  min=a;
	  mid=c;
	  max=b;
	}  
    }
  
  if ((b<=a) && (b<=c))
    {
      if (a<=c)
	{
	  min=b;
	  mid=a;
	  max=c;
	}
      else
	{
	  min=b;
	  mid=c;
	  max=a;
	}
    }
  
  
  if ((c<=a) && (c<=b))
    {
      if (a<=b)
	{
	  min=c;
	  mid=a;
	  max=b;
	}
      else
	{
	  min=c;
	  mid=b;
	  max=a;
	}
    }
  
  std::cout << min << "," << mid << "," << max << std::endl;
  return 0;
}
