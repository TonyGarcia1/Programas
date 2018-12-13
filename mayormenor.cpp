#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int num, mayor, menor;
    for(int i=0;i<5;i++){
       cout<<"Dame un numero: ";
       cin>>num;
       if(i==0){
           mayor=num;
           menor=num;
       }
       else{
           if(num>mayor) mayor=num;
           if(num<menor) menor=num;
       }
    }
    cout<<"El numero mayor es: "<<mayor<<endl;
    cout<<"El numero menor es: "<<menor<<endl;
    return 0;
}
