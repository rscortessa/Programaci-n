#include<fstream>
#include<iostream>
#include<string>
void leernumeros(std::string name)
{
  std::ifstream fin(name);
  int n;
  double x;
  while(fin)
    {
      fin>>n>>x;
      std::cout<<n<<"\t"<<x<<std::endl;
    }
  fin.close();
}

int main ()
{
  leernumeros("datos.txt");
  return 0;
  
}
