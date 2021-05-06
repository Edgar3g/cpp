#include <iostream>
using namespace std;

int numeros[5] = {1,2,4,3,5}, soma= 0, i;
int main()
{
  

    for(int i; i <= 5; i++)
    {
        soma += numeros[i];
        
    } 
    
    cout << "Soma dos números = " << soma <<endl;
    
}