#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    float HT, VH, PD, TD, SB, SL;

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    cout << "Entre com a quantidade de horas trabalhadas.:\t"; cin >> HT;
    cout << "Entre com o valor da hora de trabalho.:\t\t"; cin >> VH;
    cout << "Entre com o valor do percentual de desconto.:\t\t"; cin >> PD;

    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;
    
    
    cout << "O Sálario bruto é de:\t"<< setw(8)<< SB <<endl;
    cout << "Desconto:\t\t"<<setw(8) << TD<<endl;
    cout << "O Sálario Liquido:\t"<< SL<<endl;

}