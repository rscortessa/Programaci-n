#include<iostream>
int suma(int n, int m){
  int sum=0;
  int x=m;
  do {
    sum=sum+x;
    x=++x;
    
     }while(x<=n);
  return sum;
}
int main()
{
  int n;
  int m;
  std::cout<<"Escribe el limite inferior y superior de la suma\n";
  std::cin>>m>>n;
  std::cout<<"La suma es "<<suma(n,m)<<std::endl;
  return 0;
}
  
