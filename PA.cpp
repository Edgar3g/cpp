// Calcula o perimetro e a ara de uma circunferencia de raio R (fornecido pelo usuario)

#include <iostream>
#include <cmath>
using namespace std;
// #define PI 3.12159;
int main(void)
{
    float Raio; float Perim, Area,PI = 3.12159;;
    
    cout << "Entre com valor do raio: ";
    cin >> Raio;

    Perim = 2 * PI * Raio;

    Area = PI * pow(Raio, 2); 

    cout << "O Perimetro da circunferencia de raio " << Raio << "eh "<< Perim << endl;

    cout << "a area é " << Area <<endl;

}