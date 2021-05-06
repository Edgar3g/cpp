#include <iostream>
#include <math.h>
using namespace std;

main(void)
{
        float x1, x2, y1, y2, d;

        cout << "Entre com valor de x1: "; cin >> x1;
        cout << "Entre com valor de x2: "; cin >> x2;

        cout << "Entre com valor de y1: "; cin >> y1;
        cout << "Entre com valor de y2: "; cin >> y2;

        d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
        cout << "A distancia entre os pontes éh = "<< d<< endl;


}