#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int LanzarDado();
int main()
{
  cout<<LanzarDado;
  return 0;
}
int LanzarDado()
{
    int dado;
    
    srand(time(0));
    rand()%6+1;
    return dado;
}
