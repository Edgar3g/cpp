#include <iostream>
using namespace std;

float Fahr_to_cels(float f)
{
    return 5.0 / 9.0 * (f - 32.0);
} 

int main(void)
{
    float temperatura ;

    cout << "Entre com a temperatura á converter: "; cin >> temperatura;

    float cels = Fahr_to_cels(temperatura);

    cout << "A tempera temperatu " << temperatura << "ºF é " << cels << "ºC"<<endl;

}