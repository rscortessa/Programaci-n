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
  std::cout << "Hola escribe dos n�meros que quieras comparar"<<std::endl;
  std::cin>> c >> d;
  std::cout <<"El m�ximo de esos dos n�meros es "<<Printint(c,d)<<std::endl;
  return 0;
}
