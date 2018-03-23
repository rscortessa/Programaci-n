#include<iostream>
#include<fstream>
#include<string>
void sumarnumeros(std::string name)
{
  std::ifstream fin(name);
  int n;
  double x;
  double y=0;
  while(fin)
    {
      fin >>n>>x;
      y=y+x;
    }
  std::cout<<y-(1/100.0)<<std::endl;
  fin.close();
}
	
int main ()
{
  sumarnumeros("datos.txt");

  return 0;
}
