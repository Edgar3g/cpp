#include <iostream>
using namespace std;

main (void)
{
    int num1,num2,aux;

    cout << "Entre com dois numeros: ";
    cin >> num1 >> num2;

    if(num1 > num2)
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
        cout << "Em ordem: \n";
    }
    cout <<"Os numeros ordenados : "<< num1 << " " << num2<<endl;
}