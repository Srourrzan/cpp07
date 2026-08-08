#include <iostream>
#include "Array.hpp"

int main()
{
  Array<int> *a = new Array<int>();

  delete(a);
  return (0);
}
