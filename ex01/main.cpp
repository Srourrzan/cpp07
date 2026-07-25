#include "iter.hpp"
#include <string>

int main()
{
  int arr[] = {1, 2, 3};
  iter(arr, sizeof(arr) / sizeof(arr[0]), increaseFunc<int>);
  iter(arr, sizeof(arr) / sizeof(arr[0]), printFunc<int>);
  std::cout << std::endl;

  const std::string names[] = {"Razan, Srour"};
  iter(names, sizeof(names) / sizeof(names[0]), printFunc<std::string>);
  std::cout << std::endl;

  float arrF[] = {5.6, 0.9, -4.01, 104.3};
  iter(arrF, sizeof(arrF) / sizeof(arrF[0]), printFunc<float>);

  // const float arrFloat[] = {5.6, 0.9, -4.01, 104.3};
  // iter(arrFloat, sizeof(arrFloat) / sizeof(arrFloat[0]), increaseFunc<float>);
  
  return (0);
}
