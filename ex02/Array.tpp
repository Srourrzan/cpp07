#include "Array.hpp"

template <typename T>
Array<T>::Array( )
: _size(0),
_array(NULL)
{}

template <typename T>
Array<T>::~Array( )
{}

template <typename T>
Array<T>::Array( const Array & src )
: _size(src._size),
  _array(NULL)
{

}