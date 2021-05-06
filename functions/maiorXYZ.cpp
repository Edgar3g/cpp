#include <iostream>
#include <cmath>

using namespace std;

int Find(int x, int y,int z)
{
    int maior = x;

    if (maior < y)
        maior = y;
    if (maior < z)
        maior = z;
    
    return maior;

}

int main(void)
{
    int value1,value2,value3, Maior;

    cout << "Entre com os três valores: "; cin >> value1 >> value2 >> value3;

    Maior = Find(value1,value2,value3);

    cout << "O maior valor digitado é: "<< Maior <<endl;
}