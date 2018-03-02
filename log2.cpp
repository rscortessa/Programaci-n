#include<iostream>
#include<cmath>
void lg2(double x)
{
  for(x=0.1;x<=1000;x=x*2)
    {
      std::cout<<x<<"\t"<<log2(x)<<"\n";
    }
}
int main(void)
  {
    double y;
    lg2(y);
    return 0;
  }
  
