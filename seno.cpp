#include<iostream>
#include<cmath>
#include<cstdio>
double f(double x)
{
  return std::sin(x);
}
double fdev(double x, double h)
{
  double y=(f(x+h)-f(x))/h;
  return y;
}
int main (void)
{
  double x=M_PI/3;
  double h=0.1;
  std::printf("%25.16e\n",fdev(x,h));
  return 0;
}
  
    

	    
