#include<iostream>
#include<cmath>
double  fdev(double h)
{
  double f;
  f=(sin(0+h)/h-sin(0)/h);
return f;
}
int main ()
{
  double x;
  double h;
  for(h=0.001;h<1.0;h=h+0.01)
    {
      x= 1- fdev(h)/cos(0);
      std::cout<<x<<"\n"<<std::endl;
    }
  return 0;
}
  
      
