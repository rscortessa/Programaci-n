#include<iostream>
int suma(int a, int b)
{
  std::cout << &a <<std::endl;
  int r;
  r = a + b;
  return r;
}
int main (void)
{
  int c, a, b;
  a= 5;
  b= 3;
  c= suma(a,b);
  
    std::cout<< "El resultado de la suma es"<< c <<std::endl;
  std::cout << &a << std::endl;
  return 0;
}
