#include<iostream>
#include<cmath>
int suma(int n, int m)
{
  int x;
  int sum=0;
  for (m=0;x<=n;x=x+1)
    {
      sum=sum+x;
     
    }
  
  return sum;
}

int main()
{
  int n;
  int m;
  std::cout<<"Escribe el numero hasta el que deseas sumar, y desde donde deseas empezar a sumar\n"<<std::endl;
  std::cin>>n>>m;
  std::cout<<suma(n,m)<<std::endl;

  return 0;
}

  
    
