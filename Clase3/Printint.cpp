#include<iostream>
int Printint(int a, int b)
{
  int x=0; 
  if ((a-b)> 0){
       x=a;
  }
  else
      {   
	 x=b;
    }
  return x;
}
int main (void)
{
  int c=0;
  int d=0;
  std::cout << "Hola escribe dos números que quieras comparar"<<std::endl;
  std::cin>> c >> d;
  std::cout <<"El máximo de esos dos números es "<<Printint(c,d)<<std::endl;
  return 0;
}
