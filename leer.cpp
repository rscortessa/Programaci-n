#include<fstream>
#include<iostream>
#include<string>
void f(double x, std::string name);
int main ()
{
  double x=1;
  f(x,"Holis.txt");
  
  return 0;
}
void f(double x ,std::string name)
{

  std::ofstream fout(name);
  fout.precision(16); fout.setf(std::ios::scientific);
  while(x<=100)
    {
      fout<<x<<"\t"<<1/x<<std::endl;
  x=++x;
    }
  fout.close();
}
