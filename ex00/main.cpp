#include "whatever.hpp"
#include <iostream>

int main()
{
  swap(3, 5);
  swap(5.6, 4.2);
  std::cout << "min(5, 10): "
			<< min(5, 10)
			<< std::endl;
  std::cout << "min('e', 'a'): "
			<< min('e', 'a')
			<< std::endl;
  std::cout << "max(5.6, 10.93): "
			<< max(5.6, 10.93)
			<< std::endl;
  std::cout << "max('z', 'r'): "
			<< max('z', 'r')
			<< std::endl;

  int a = 2;
  int b = 3;
  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
  
  return (0);
}
