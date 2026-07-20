#ifndef whatever_hpp
# define whatever_hpp

template <typename T>
void swap(T x, T y)
{
  T temp;

  temp = x;
  x = y;
  y = temp;
}



#endif
