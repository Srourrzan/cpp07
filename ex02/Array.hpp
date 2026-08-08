#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
public:
  Array( );
  ~Array( );
  // Array( unsigned int size ): _size(size), _array(NULL)
  // {
    
  // };
  Array( const Array & ); //deep copy
  // Array & operator=( const Array & rhs )
  // {
  //   if (this != &rhs)
  //     {
	
  //     }
  // };//deep copy
  // T operator[]( unsigned int index ) const
  // {
  //   if (index >= _size || index < 0)
  //     throw (std::exception());
  //   return (); //return what?
  // }; //check out of bound
  // T & operator[]( int index )
  // {
  // };
  // size_t size() const;

private:
  unsigned int _size;
  T *_array;
};

# include "Array.tpp"

#endif
