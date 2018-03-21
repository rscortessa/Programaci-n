#include<iostream>
#include<cmath>
using funcion=double(double);
double fun(double x);
double bisection(double xl, double xo, double eps, int nmax, funcion fun);
int main()
{
  double xl;
  double xo;
  double eps;
  int nmax;
  std::cout<<"escribe limite superior, limite inferior, epsilon, numero de pasos y función"<<std::endl;
  std::cin>>xl>>xo>>eps>>nmax;
  std::cout<<bisection(xl,xo,eps,nmax,fun)<<std::endl;
  
  return 0;
}
double bisection(double xl,double xo, double eps, int nmax, funcion fun)
{

  double xs=(xl+xo)/2;
  double valor=0;
  while (valor==0)
    {
      if((fun(xo))*fun(xl)<0){
	
	if(std::abs(fun(xs))<=eps) {
	  valor=xs;
      return valor;
	}
	else{
	  xo=xs;
	}
      }
      else{
	xl=xs; }
    }
  return valor;}
double fun( double x)
{
  return (sin(x));
}

      
      
  
