#include<iostream>
#include<cmath>
void  printf(double x)
{
  for(x=-M_PI;x<M_PI;x=x+0.1)
    {
      std::cout << x << "\t"<< std::sin(x)<<"\n";
    }

}
int main(void)
{
  double x;
  printf(x);
    return 0;
}

  
