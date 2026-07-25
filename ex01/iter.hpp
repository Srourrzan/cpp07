#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template <typename T>
void printFunc(const T& x)
{
  std::cout << x
			<< std::endl;
}

template <typename T>
void increaseFunc(T& x)
{
  x += 1;
}

template <typename T, typename Func>
void iter( T *array, const size_t size, Func *func )
{
  for (size_t i = 0; i < size; i++)
	func(array[i]);
}

#endif
