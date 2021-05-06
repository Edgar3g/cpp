#include <iostream>
using namespace std;

main(void)
{
    float n1, n2, n3, n4, media;

    cout << "Entre com as notas: "; cin >> n1;
    cout << "Entre com as notas: "; cin >> n2;
    cout << "Entre com as notas: "; cin >> n3;
    cout << "Entre com as notas: "; cin >> n4;
    
    media = (n1 + n2 + n3 + n4) / 4;

    cout << "A sua media éh de " << media <<endl;
}