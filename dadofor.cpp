#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int LanzarDado();
int main()
{
    srand(time(0));
    for(int i=1;i<=50;i++)
  cout<<LanzarDado()<<" ";
  return 0;
}
int LanzarDado()
{
    int dado;
    
        dado=rand()%6+1;
    
    return dado;
}
